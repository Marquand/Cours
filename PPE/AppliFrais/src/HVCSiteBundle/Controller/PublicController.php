<?php
namespace HVCSiteBundle\Controller;

use Symfony\Bundle\FrameworkBundle\Controller\Controller;
class PublicController extends Controller {
    function indexAction (){
        return $this->render("HVCSiteBundle:Public:index.html.twig");
    }

    function SuiviCAction (){
        return $this->render("HVCSiteBundle:Public:SuiviC.html.twig");
    }

    function saisirVAction (){
        return $this->render("HVCSiteBundle:Public:saisirV.html.twig");
    }
    function consulterCAction (){
        return $this->render("HVCSiteBundle:Public:consulterC.html.twig");
    }

    function tableAction (){
        return $this->render("HVCSiteBundle:Public:table.html.twig");
    }
}

?>