<?php


session_start();//le mettre dans chaque page


//Configuration de la BDD
define('_HOST_NAME_', 'localhost');
define('_DB_LOGIN_', 'root');
define('_DB_PASSWORD', '');
define('_DATABASE_NAME_', 'hvcode');

//PDO Database Connection
 try {
 $databaseConnection = new PDO('mysql:host='._HOST_NAME_.';dbname='._DATABASE_NAME_, _DB_LOGIN_, _DB_PASSWORD);
 $databaseConnection->setAttribute(PDO::ATTR_ERRMODE, PDO::ERRMODE_EXCEPTION);
 } catch(PDOException $e) {
 echo 'ERROR: ' . $e->getMessage();
 }
 

 if(isset($_POST['submit'])){
 $errMsg = '';
     
 //le login et le mdp envoyé de form du html
$login = $_POST['login'];
$mdp = $_POST['mdp'];
     
     
if($login == '')
 $errMsg .= 'Vous devez entre un nom d utilisateur valide<br>';
 
if($mdp == '')
 $errMsg .= 'You must enter your Password<br>';
 
 
if($errMsg == ''){
 $records = $databaseConnection->prepare('SELECT * FROM  comptes WHERE login = :login');
 $records->bindParam(':login', $login);
 $records->execute();
 $results = $records->fetch(PDO::FETCH_ASSOC);
if(count($results) > 0 && password_verify($mdp, $results['mdp'])){
 $_SESSION['login'] = $results['login'];
 header('Location: salarie.php');
 exit;
 }else{
 $errMsg .= 'Username and Password are not found<br>';
 }
} 
 }



?>