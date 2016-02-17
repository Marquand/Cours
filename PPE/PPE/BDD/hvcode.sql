-- phpMyAdmin SQL Dump
-- version 4.1.14
-- http://www.phpmyadmin.net
--
-- Client :  127.0.0.1
-- Généré le :  Dim 04 Octobre 2015 à 19:07
-- Version du serveur :  5.6.17
-- Version de PHP :  5.5.12

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8 */;

--
-- Base de données :  `hvcode`
--

-- --------------------------------------------------------

--
-- Structure de la table `comptes`
--

CREATE TABLE IF NOT EXISTS `comptes` (
  `id` int(5) NOT NULL AUTO_INCREMENT,
  `nom` varchar(50) NOT NULL,
  `prenom` varchar(50) NOT NULL,
  `adresse` varchar(50) NOT NULL,
  `ville` varchar(50) NOT NULL,
  `cp` varchar(5) NOT NULL,
  `dateEmbauche` date NOT NULL,
  `login` varchar(50) NOT NULL,
  `mdp` varchar(250) NOT NULL,
  `type` int(1) NOT NULL,
  PRIMARY KEY (`id`)
) ENGINE=InnoDB  DEFAULT CHARSET=latin1 AUTO_INCREMENT=5 ;

--
-- Contenu de la table `comptes`
--

INSERT INTO `comptes` (`id`, `nom`, `prenom`, `adresse`, `ville`, `cp`, `dateEmbauche`, `login`, `mdp`, `type`) VALUES
(1, 'Durand', 'Paul', '6 rue des vignes', 'Montluel', '01120', '2013-07-07', 'p.durand', 'pauldurand01120', 0),
(2, 'Joule', 'Brice', '25 rue des alizés', 'Amberieu-en-Bugey', '01500', '2015-03-10', 'b.joule', 'bricejoule01500', 0),
(3, 'Miller', 'Robert', '7 chemin des accacias', 'Sathonay-Camp', '69580', '2011-03-15', 'r.miller', 'robertmiller69580', 0),
(4, 'Simour', 'Jonathan', '29 hameau des aigrettes', 'Genas', '69740', '2014-08-12', 'j.simour', 'jonathansimour69740', 0);

-- --------------------------------------------------------

--
-- Structure de la table `etat`
--

CREATE TABLE IF NOT EXISTS `etat` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `libelle` varchar(20) NOT NULL,
  PRIMARY KEY (`id`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1 AUTO_INCREMENT=1 ;

-- --------------------------------------------------------

--
-- Structure de la table `fichefrais`
--

CREATE TABLE IF NOT EXISTS `fichefrais` (
  `id` int(5) NOT NULL AUTO_INCREMENT,
  `mois` varchar(20) NOT NULL,
  `nbJustificatifs` int(5) NOT NULL,
  `montantValide` int(50) NOT NULL,
  `dateMotif` date NOT NULL,
  `idComptes` int(5) NOT NULL,
  PRIMARY KEY (`id`),
  UNIQUE KEY `idComptes` (`idComptes`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1 AUTO_INCREMENT=1 ;

-- --------------------------------------------------------

--
-- Structure de la table `fraisforfait`
--

CREATE TABLE IF NOT EXISTS `fraisforfait` (
  `id` int(5) NOT NULL AUTO_INCREMENT,
  `libelle` varchar(20) NOT NULL,
  `montant` int(20) NOT NULL,
  PRIMARY KEY (`id`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1 AUTO_INCREMENT=1 ;

-- --------------------------------------------------------

--
-- Structure de la table `lignefraisforfait`
--

CREATE TABLE IF NOT EXISTS `lignefraisforfait` (
  `idFraisForfait` int(5) NOT NULL,
  `idComptes` int(5) NOT NULL,
  `mois` varchar(20) NOT NULL,
  `quantite` int(20) NOT NULL,
  UNIQUE KEY `idComptes` (`idComptes`),
  UNIQUE KEY `idFraisForfait` (`idFraisForfait`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

-- --------------------------------------------------------

--
-- Structure de la table `lignefraishorsfrais`
--

CREATE TABLE IF NOT EXISTS `lignefraishorsfrais` (
  `id` int(5) NOT NULL AUTO_INCREMENT,
  `date` date NOT NULL,
  `montant` int(20) NOT NULL,
  `libelle` varchar(50) NOT NULL,
  PRIMARY KEY (`id`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1 AUTO_INCREMENT=1 ;

--
-- Contraintes pour les tables exportées
--

--
-- Contraintes pour la table `fichefrais`
--
ALTER TABLE `fichefrais`
  ADD CONSTRAINT `fichefrais_ibfk_1` FOREIGN KEY (`idComptes`) REFERENCES `comptes` (`id`);

--
-- Contraintes pour la table `lignefraisforfait`
--
ALTER TABLE `lignefraisforfait`
  ADD CONSTRAINT `lignefraisforfait_ibfk_1` FOREIGN KEY (`idComptes`) REFERENCES `comptes` (`id`),
  ADD CONSTRAINT `lignefraisforfait_ibfk_2` FOREIGN KEY (`idFraisForfait`) REFERENCES `fraisforfait` (`id`);

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
