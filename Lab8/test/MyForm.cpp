#include "MyForm.h" // table_name
#include "SharingCar.h"
#include <vector>
#include <string>
#include <iostream>
#include "Application2.h"

using namespace Sharing;
using namespace App;
using namespace test; // project name
using namespace System;



[STAThreadAttribute]
int main(cli::array<System::String^>^ args)
{
    /*vector < string> listCars;
    SharingCar mainService;*/
    
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);

    Application::Run(gcnew MyForm());

    /*for (int i = 0; i < 10; i++)
    {
        listCars.push_back(mainService.CarList[i].model);
    }*/
    
    return 0;
}

System::Void test::MyForm::MyForm_Load(System::Object^ sender, System::EventArgs^ e)
{
    //vector <string> listCars;
    
    //listBox1->Items->Insert(0, "1");
    //listBox1->Items->Insert(1, "1");
    
    return System::Void();
}

System::Void test::MyForm::button1_Click(System::Object^ sender, System::EventArgs^ e)
{
    
    visible_adm(false);
    visible_app(true);
    return System::Void();
}

System::Void test::MyForm::button3_Click(System::Object^ sender, System::EventArgs^ e)
{
    
    if (listBox1->SelectedIndex != -1 
            && textBox1->Text->Length!=0
            && textBox2->Text->Length != 0
            && textBox3->Text->Length != 0
            && textBox4->Text->Length != 0) {
        
        int timeRent;
        string firstName, secondName, dateOfBirth;

        timeRent = stoi((char*)(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(textBox3->Text)).ToPointer());

        firstName = (char*)(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(textBox1->Text)).ToPointer();
        secondName = (char*)(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(textBox2->Text)).ToPointer();
        dateOfBirth = (char*)(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(textBox4->Text)).ToPointer();
        //textBox5->Text = gcnew String(dateOfBirth.c_str());

        //textBox5->Text = gcnew String(timeRent1.c_str());
        ApplicationData newApp(timeRent, firstName, secondName, dateOfBirth);
        newApp.CarNumber = listBox1->SelectedIndex;
        mainService.add_app(newApp);
        
       visible_adm(false);
       visible_app(false);
    } 
    return System::Void();
}

System::Void test::MyForm::textBox3_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e)
{

   
    return System::Void();
}

System::Void test::MyForm::button2_Click(System::Object^ sender, System::EventArgs^ e)  
{
    visible_app(false);
    visible_adm(true);
    return System::Void();
}

System::Void test::MyForm::visible_app(bool i)
{
    if (i)
    {
        textBox1->Clear();
        textBox2->Clear();
        textBox3->Clear();
        textBox4->Clear();

        textBox1->Visible = true;
        textBox2->Visible = true;
        textBox3->Visible = true;
        textBox4->Visible = true;

        listBox1->Visible = true;

        label1->Visible = true;
        label2->Visible = true;
        label3->Visible = true;
        label4->Visible = true;

        checkBox1->Visible = false;

        button3->Visible = true;
        listBox1->Items->Clear();
        for (int i = 0; i < mainService.CarList.size(); i++)
        {
            string temp = mainService.CarList[i].model;
            listBox1->Items->Add(gcnew String(temp.c_str()));
        }
    }
    else
    {
        textBox1->Clear();
        textBox2->Clear();
        textBox3->Clear();
        textBox4->Clear();
        textBox6->Clear();

        textBox1->Visible = false;
        textBox2->Visible = false;
        textBox3->Visible = false;
        textBox4->Visible = false;

        listBox1->Visible = false;

        label1->Visible = false;
        label2->Visible = false;
        label3->Visible = false;
        label4->Visible = false;


        button3->Visible = false;
        listBox1->Items->Clear();
    }
}
System::Void test::MyForm::visible_adm(bool i)
{
    if (i)
    {
        

        textBox1->Visible = true;
        textBox2->Visible = true;
        textBox3->Visible = true;
        textBox4->Visible = true;
        textBox6->Visible = true;
        textBox7->Visible = true;
        textBox8->Visible = true;
        textBox9->Visible = true;
        textBox10->Visible = true;
        textBox11->Visible = true;
        textBox7->Clear();
        textBox8->Clear();
        textBox9->Clear();
        textBox10->Clear();
        textBox11->Clear();


        textBox1->ReadOnly = true;
        textBox2->ReadOnly = true;
        textBox3->ReadOnly = true;
        textBox4->ReadOnly = true;

        listBox2->Visible = true;
        listBox1->Visible = true;

        label1->Visible = true;
        label2->Visible = true;
        label3->Visible = true;
        label4->Visible = true;
        label5->Visible = true;
        label6->Visible = true;
        label7->Visible = true;
        label8->Visible = true;
        label9->Visible = true;
        label10->Visible = true;

        button5->Enabled = false;
        button5->Visible = true;
        button6->Enabled = false;
        button6->Visible = true;
        button4->Enabled = false;
        button4->Visible = true;

        checkBox1->Visible = true;

        listBox2->Items->Clear();
        for (int i = 0; i < mainService.appList.size(); i++)
        {
            string temp = /*mainService.appList[i].firstName+" "+ */mainService.appList[i].scondName;
            
            listBox2->Items->Add(gcnew String(temp.c_str()));
        }
        listBox1->Items->Clear();
        for (int i = 0; i < mainService.CarList.size(); i++)
        {
            string temp = mainService.CarList[i].model;
            listBox1->Items->Add(gcnew String(temp.c_str()));
        }
    }
    else
    {
        textBox1->Visible = false;
        textBox2->Visible = false;
        textBox3->Visible = false;
        textBox4->Visible = false;
        textBox6->Visible = false;
        textBox7->Visible = false;
        textBox8->Visible = false;
        textBox9->Visible = false;
        textBox10->Visible = false;
        textBox11->Visible = false;

        listBox2->Visible = false;
        listBox1->Visible = false;

        textBox1->ReadOnly = false;
        textBox2->ReadOnly = false;
        textBox3->ReadOnly = false;
        textBox4->ReadOnly = false;

        label1->Visible = false;
        label2->Visible = false;
        label3->Visible = false;
        label4->Visible = false;
        label5->Visible = false;
        label6->Visible = false;
        label7->Visible = false;
        label8->Visible = false;
        label9->Visible = false;
        label10->Visible = false;

        button5->Enabled = false;
        button5->Visible = false;
        button6->Enabled = false;
        button6->Visible = false;
        button4->Enabled = false;
        button4->Visible = false;

        checkBox1->Visible = false;
        checkBox1->Enabled = false;

        listBox2->Items->Clear();
    }
}

System::Void test::MyForm::listBox2_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e)
{
    checkBox1->Enabled = true;
    button5->Enabled = true;
    textBox1->Text = gcnew String(mainService.appList[listBox2->SelectedIndex].firstName.c_str());
    textBox2->Text = gcnew String(mainService.appList[listBox2->SelectedIndex].scondName.c_str());
    textBox3->Text = gcnew String(to_string(mainService.appList[listBox2->SelectedIndex].timeRent).c_str());
    textBox4->Text = gcnew String(mainService.appList[listBox2->SelectedIndex].dateOfBirth.c_str());
    textBox6->Text = gcnew String(mainService.CarList[mainService.appList[listBox2->SelectedIndex].CarNumber].model.c_str());
    if(mainService.appList[listBox2->SelectedIndex].damage_Car(true,false))
    {
        checkBox1->Checked = true;
    }
    else
        checkBox1->Checked = false;
    return System::Void();
}

System::Void test::MyForm::checkBox1_CheckedChanged_1(System::Object^ sender, System::EventArgs^ e)
{
    if (checkBox1->Checked)
    {
        mainService.appList[listBox2->SelectedIndex].damage_Car(false, true);
    }
    else
        mainService.appList[listBox2->SelectedIndex].damage_Car(false, false);
    return System::Void();
}

System::Void test::MyForm::button5_Click(System::Object^ sender, System::EventArgs^ e)
{ 
    mainService.appList.erase(mainService.appList.begin()+listBox2->SelectedIndex);
    visible_app(false);
    visible_adm(true);
    return System::Void();
}

System::Void test::MyForm::textBox7_TextChanged(System::Object^ sender, System::EventArgs^ e)
{
    button6->Enabled = true;
    button4->Enabled = true;
    return System::Void();
}

System::Void test::MyForm::button4_Click(System::Object^ sender, System::EventArgs^ e)
{
    if (listBox1->SelectedIndex != -1
        && textBox7->Text->Length != 0
        && textBox8->Text->Length != 0
        && textBox9->Text->Length != 0
        && textBox10->Text->Length != 0
        && textBox11->Text->Length != 0) {
        string model, clolor;
        int year, price, run;
        model = (char*)(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(textBox7->Text)).ToPointer();
        year = stoi((char*)(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(textBox8->Text)).ToPointer());
        price = stoi((char*)(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(textBox9->Text)).ToPointer());
        run = stoi((char*)(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(textBox10->Text)).ToPointer());
        clolor = (char*)(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(textBox11->Text)).ToPointer();
        mainService.add_Car(year, price, run, model, clolor);
        visible_app(false);
        visible_adm(true);
        return System::Void();
    }
}

System::Void test::MyForm::button6_Click(System::Object^ sender, System::EventArgs^ e)
{
    if (listBox1->SelectedIndex != -1
        && textBox7->Text->Length != 0
        && textBox8->Text->Length != 0
        && textBox9->Text->Length != 0
        && textBox10->Text->Length != 0
        && textBox11->Text->Length != 0) {
        string model, clolor;
        int year, price, run;
        model = (char*)(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(textBox7->Text)).ToPointer();
        year = stoi((char*)(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(textBox8->Text)).ToPointer());
        price = stoi((char*)(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(textBox9->Text)).ToPointer());
        run = stoi((char*)(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(textBox10->Text)).ToPointer());
        clolor = (char*)(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(textBox11->Text)).ToPointer();
        mainService.CarList[listBox1->SelectedIndex].CarRun = run;
        mainService.CarList[listBox1->SelectedIndex].model = model;
        mainService.CarList[listBox1->SelectedIndex].color = clolor;
        mainService.CarList[listBox1->SelectedIndex].price = price;
        mainService.CarList[listBox1->SelectedIndex].year = year;
        visible_app(false);
        visible_adm(true);
        return System::Void();
    }
}

System::Void test::MyForm::listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e)
{
    textBox7->Text = gcnew String(mainService.CarList[listBox1->SelectedIndex].model.c_str());
    textBox8->Text = gcnew String(to_string(mainService.CarList[listBox1->SelectedIndex].year).c_str());
    textBox9->Text = gcnew String(to_string(mainService.CarList[listBox1->SelectedIndex].price).c_str());
    textBox10->Text = gcnew String(to_string(mainService.CarList[listBox1->SelectedIndex].CarRun).c_str());
    textBox11->Text = gcnew String(mainService.CarList[listBox1->SelectedIndex].color.c_str());
    button6->Enabled = false;
    button4->Enabled = false;
    return System::Void();
}

System::Void test::MyForm::textBox8_TextChanged(System::Object^ sender, System::EventArgs^ e)
{
    button6->Enabled = true;
    button4->Enabled = true;
    return System::Void();
}
System::Void test::MyForm::textBox9_TextChanged(System::Object^ sender, System::EventArgs^ e)
{
    button6->Enabled = true;
    button4->Enabled = true;
    return System::Void();
}
System::Void test::MyForm::textBox10_TextChanged(System::Object^ sender, System::EventArgs^ e)
{
    button6->Enabled = true;
    button4->Enabled = true;
    return System::Void();
}
System::Void test::MyForm::textBox11_TextChanged(System::Object^ sender, System::EventArgs^ e)
{
    button6->Enabled = true;
    button4->Enabled = true;
    return System::Void();
}