namespace Appli_mdr
{
    partial class Form1
    {
        /// <summary>
        /// Variable nécessaire au concepteur.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Nettoyage des ressources utilisées.
        /// </summary>
        /// <param name="disposing">true si les ressources managées doivent être supprimées ; sinon, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Code généré par le Concepteur Windows Form

        /// <summary>
        /// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
        /// le contenu de cette méthode avec l'éditeur de code.
        /// </summary>
        private void InitializeComponent()
        {
            System.ComponentModel.ComponentResourceManager resources = new System.ComponentModel.ComponentResourceManager(typeof(Form1));
            this.LBCapital = new System.Windows.Forms.Label();
            this.LBDuree = new System.Windows.Forms.Label();
            this.LBTaux = new System.Windows.Forms.Label();
            this.TBCapital = new System.Windows.Forms.TextBox();
            this.TBDuree = new System.Windows.Forms.TextBox();
            this.TBTaux = new System.Windows.Forms.TextBox();
            this.GBCalcul = new System.Windows.Forms.GroupBox();
            this.btQuitter = new System.Windows.Forms.Button();
            this.btEffacer = new System.Windows.Forms.Button();
            this.btCalculer = new System.Windows.Forms.Button();
            this.TBCapitalFutur = new System.Windows.Forms.TextBox();
            this.LBCapitalF = new System.Windows.Forms.Label();
            this.GBResultat = new System.Windows.Forms.GroupBox();
            this.GBCalcul.SuspendLayout();
            this.GBResultat.SuspendLayout();
            this.SuspendLayout();
            // 
            // LBCapital
            // 
            resources.ApplyResources(this.LBCapital, "LBCapital");
            this.LBCapital.Name = "LBCapital";
            // 
            // LBDuree
            // 
            resources.ApplyResources(this.LBDuree, "LBDuree");
            this.LBDuree.Name = "LBDuree";
            // 
            // LBTaux
            // 
            resources.ApplyResources(this.LBTaux, "LBTaux");
            this.LBTaux.Name = "LBTaux";
            // 
            // TBCapital
            // 
            this.TBCapital.BackColor = System.Drawing.SystemColors.ControlLightLight;
            resources.ApplyResources(this.TBCapital, "TBCapital");
            this.TBCapital.Name = "TBCapital";
            // 
            // TBDuree
            // 
            resources.ApplyResources(this.TBDuree, "TBDuree");
            this.TBDuree.Name = "TBDuree";
            // 
            // TBTaux
            // 
            resources.ApplyResources(this.TBTaux, "TBTaux");
            this.TBTaux.Name = "TBTaux";
            // 
            // GBCalcul
            // 
            this.GBCalcul.Controls.Add(this.btQuitter);
            this.GBCalcul.Controls.Add(this.btEffacer);
            this.GBCalcul.Controls.Add(this.btCalculer);
            resources.ApplyResources(this.GBCalcul, "GBCalcul");
            this.GBCalcul.Name = "GBCalcul";
            this.GBCalcul.TabStop = false;
            // 
            // btQuitter
            // 
            resources.ApplyResources(this.btQuitter, "btQuitter");
            this.btQuitter.Name = "btQuitter";
            this.btQuitter.UseVisualStyleBackColor = true;
            this.btQuitter.Click += new System.EventHandler(this.btQuitter_Click);
            // 
            // btEffacer
            // 
            resources.ApplyResources(this.btEffacer, "btEffacer");
            this.btEffacer.Name = "btEffacer";
            this.btEffacer.Click += new System.EventHandler(this.btEffacer_Click);
            // 
            // btCalculer
            // 
            resources.ApplyResources(this.btCalculer, "btCalculer");
            this.btCalculer.Name = "btCalculer";
            this.btCalculer.Click += new System.EventHandler(this.btCalculer_Click);
            // 
            // TBCapitalFutur
            // 
            this.TBCapitalFutur.BackColor = System.Drawing.SystemColors.InactiveCaptionText;
            resources.ApplyResources(this.TBCapitalFutur, "TBCapitalFutur");
            this.TBCapitalFutur.Name = "TBCapitalFutur";
            this.TBCapitalFutur.ReadOnly = true;
            // 
            // LBCapitalF
            // 
            resources.ApplyResources(this.LBCapitalF, "LBCapitalF");
            this.LBCapitalF.Name = "LBCapitalF";
            // 
            // GBResultat
            // 
            this.GBResultat.Controls.Add(this.LBCapitalF);
            this.GBResultat.Controls.Add(this.TBCapitalFutur);
            resources.ApplyResources(this.GBResultat, "GBResultat");
            this.GBResultat.Name = "GBResultat";
            this.GBResultat.TabStop = false;
            // 
            // Form1
            // 
            resources.ApplyResources(this, "$this");
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.BackColor = System.Drawing.SystemColors.ControlLight;
            this.Controls.Add(this.GBResultat);
            this.Controls.Add(this.GBCalcul);
            this.Controls.Add(this.TBTaux);
            this.Controls.Add(this.TBDuree);
            this.Controls.Add(this.TBCapital);
            this.Controls.Add(this.LBTaux);
            this.Controls.Add(this.LBDuree);
            this.Controls.Add(this.LBCapital);
            this.Name = "Form1";
            this.GBCalcul.ResumeLayout(false);
            this.GBResultat.ResumeLayout(false);
            this.GBResultat.PerformLayout();
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Label LBCapital;
        private System.Windows.Forms.Label LBDuree;
        private System.Windows.Forms.Label LBTaux;
        private System.Windows.Forms.TextBox TBCapital;
        private System.Windows.Forms.TextBox TBDuree;
        private System.Windows.Forms.TextBox TBTaux;
        private System.Windows.Forms.GroupBox GBCalcul;
        private System.Windows.Forms.Button btQuitter;
        private System.Windows.Forms.Button btEffacer;
        private System.Windows.Forms.Button btCalculer;
        private System.Windows.Forms.TextBox TBCapitalFutur;
        private System.Windows.Forms.Label LBCapitalF;
        private System.Windows.Forms.GroupBox GBResultat;
    }
}

