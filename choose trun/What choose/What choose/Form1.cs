using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Diagnostics;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace What_choose
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            if (MessageBox.Show("What are you Choose?", "Choose", MessageBoxButtons.YesNo, MessageBoxIcon.Asterisk) == DialogResult.Yes)
            {


                System.Diagnostics.Process.Start("C:\\user:\\ 고스트:\\내 문서:\\Visual Studio 2013:\\Projects:\\무한:Debug:\\무한.exe");
            }


        }
    }

}