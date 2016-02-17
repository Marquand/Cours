using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Carnet_Adresse
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void btAjouter_Click(object sender, EventArgs e)
        {
            if (verifChamps() == true)
            {
                String[] valeurs = { tbPrenom.Text, tbTel.Text, TbMail.Text, tbAdresse.Text };
                lvContacts.Items.Add(tbNom.Text.Trim()).SubItems.AddRange(valeurs);
                initChamps();
            }
            else
            {
                MessageBox.Show(this,"Tous les champs ne sont pas remplis!","Erreur", 
                    MessageBoxButtons.OK,MessageBoxIcon.Error);
            }
        }
        //Vérification des champs de saisie
        private bool verifChamps()
        {
            if (tbNom.Text.Trim() == "" || tbPrenom.Text.Trim() == "" 
                || TbMail.Text.Trim() == "" || tbTel.Text.Trim() == ""
                || tbAdresse.Text.Trim() == "")
            {
                return false;
            }

            return true;
        }
        //Réinitialiser les champs de saisie
        private void initChamps()
        {
            tbNom.Text = "";
            tbPrenom.Text = "";
            tbTel.Text = "";
            TbMail.Text = "";
            tbAdresse.Text = "";
        }
        private void lvContacts_SelectedIndexChanged(object sender, EventArgs e)
        {
            if (lvContacts.SelectedItems.Count > 0)
            {
                //Activation des bouton Modifier et Supprimer
                btSupprimer.Enabled = true;
                btModifier.Enabled = true;
                //Affectation des valeurs dans les champs de saisie
                tbNom.Text     = lvContacts.SelectedItems[0].SubItems[0].Text;
                tbPrenom.Text  = lvContacts.SelectedItems[0].SubItems[1].Text;
                TbMail.Text    = lvContacts.SelectedItems[0].SubItems[2].Text;
                tbTel.Text     = lvContacts.SelectedItems[0].SubItems[3].Text;
                tbAdresse.Text = lvContacts.SelectedItems[0].SubItems[4].Text;


            }
            else
            {
                btSupprimer.Enabled = false;
                btModifier.Enabled = false;
            }
        }

        private void btSupprimer_Click(object sender, EventArgs e)
        {
            lvContacts.Items.Remove(lvContacts.SelectedItems[0]);
            initChamps();
            
        }

        private void btRecherche_Click(object sender, EventArgs e)
        {

        }
    }
}
