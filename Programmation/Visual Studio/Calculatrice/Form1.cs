using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Appli_mdr
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }
        private void btQuitter_Click(object sender, EventArgs e)
        {
            Application.Exit();
        }

        private void btEffacer_Click(object sender, EventArgs e)
        {
            TBCapital.Clear();
            TBDuree.Clear();
            TBTaux.Clear();
            TBCapitalFutur.Clear();
        }

        private void btCalculer_Click(object sender, EventArgs e)
        {
            double d = Convert.ToDouble(TBDuree.Text);
            double c = Convert.ToDouble(TBCapital.Text);
            double t = Convert.ToDouble(TBTaux.Text);

            double VF = c * (1 + d * t / 100);
                TBCapitalFutur.Text=VF+"";
        }
    }
}
