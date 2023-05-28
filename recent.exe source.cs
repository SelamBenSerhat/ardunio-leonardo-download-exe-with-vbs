using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Windows.Forms;
using System.IO;
using System.Diagnostics;
using Microsoft.Win32;
using System.Runtime.InteropServices;
using System.Reflection;
using System.Net;
using System.Net.Mail;
//namespace ismi eski projeler modifiye edilerek oluşturulduğu için ekran koruyucu olarak bırakıldı
namespace ekran_koruyucu
{   //form işte daha ne yazayım
    public partial class Form1 : Form
    {


        //bu arkadaş zaten olmazsa olmaz kompoonent hazırlama vs 
        public Form1()
        {
            InitializeComponent();
        }
        //form başladığında timerler başlatılıyor
        private void Form1_Load(object sender, EventArgs e)
        {
            timer1.Enabled = true;
            timer2.Enabled = true;
            timer3.Enabled = true;

        }
        //basit bir if else ile panel şifresi oluşturuldu
        private void button1_Click(object sender, EventArgs e)
        {
            if (textBox1.Text == "17100")
            {

                Application.Exit();
            }
            else
            {

            }
        }
        //timer ile görev yöneticisi engellendi
        private void timer1_Tick(object sender, EventArgs e)
        {

            foreach (Process p in Process.GetProcessesByName("Taskmgr"))
            {
                p.Kill();
            }


        }
        //keydown özelliği ile alt f4 engellendi
        private void Form1_KeyDown(object sender, KeyEventArgs e)
        {
            if (e.KeyCode == Keys.F4 && e.Alt == true)
            {
                e.Handled = true;


            }
            else { }
        }

        //bu iki timer ördekleri hareket ettiriyor
        private void timer2_Tick(object sender, EventArgs e)
        {
            if (pictureBox2.Left > -340)
            {
                pictureBox2.Left += 1;
                textBox1.Left += 1;
            }
            else
            {
                pictureBox2.Left = 340;
                textBox1.Left = 340;
            }
        }

        private void timer3_Tick(object sender, EventArgs e)
        {
            if (pictureBox1.Left > -340)
            {
                pictureBox1.Left -= 1;
                button1.Left -= 1;

            }
            else
            {
                pictureBox1.Left = 340;
                button1.Left -= 340;
            }
        }

        private void label3_Click(object sender, EventArgs e)
        {

        }

        private void label4_Click(object sender, EventArgs e)
        {

        }

        
    }
}

       


       
    

