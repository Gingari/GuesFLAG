#include "MyForm.h" // �������� ������������ ���� ��� ������ MyForm  

using namespace System; // ��������� ������������ ���� ��� �������������  
using namespace System::Windows::Forms; // ��������� ������������ ���� ��� Windows Forms  

[STAThreadAttribute] // ��������� �������� � �������  

int main(array<String^>^ args) { // ����� ����� � ����������, ��������� ������ ����� � �������� ����������  
    Application::SetCompatibleTextRenderingDefault(false); // ������������� ������������� � ������������ ������ �� ��������� � �������� false  
    Application::EnableVisualStyles(); // �������� ���������� ����� ��� ����������  
    Project3::MyForm form; // ������� ��������� ������ MyForm �� ������������ ���� Project5(Project5 - �������� �������)  
    Application::Run(% form); // ��������� ���������� � ��������� �������� ���� ��������� ��������� ��� ��������� �����  

}
void Project3::MyForm::Game()
{
        Answer();
        GenUncorrect();
        this->Recordlabel->Text = System::Convert::ToString(correctcount) + " | " + System::Convert::ToString(allcount);
}
void Project3::MyForm::RandomPicture()
{
    Random^ rand1 = gcnew Random(); // ��������� ��� ��
    String^ projectPath = System::IO::Path::GetDirectoryName(Application::StartupPath); // ����� ���� � ����
    String^ folderPath = System::IO::Path::Combine(projectPath, "Files"); // ������� ����� � ����������
    array<String^>^ fileNames = System::IO::Directory::GetFiles(folderPath); // �������� ��� �����
    CorFilenum = rand1->Next(0, fileNames->Length); // �������� ��������� ����
    String^ Filepath = fileNames[CorFilenum];   // ����� ��� ����
    FlagPicture->Image = Image::FromFile(fileNames[CorFilenum]); //��������� �� ����
    CorFilename = System::IO::Path::GetFileNameWithoutExtension(Filepath); // ����� ���
}
String^ Project3::MyForm::RandomPictureNameF()
{
    Random^ rand = gcnew Random();
    String^ projectPath = System::IO::Path::GetDirectoryName(Application::StartupPath);
    String^ folderPath = System::IO::Path::Combine(projectPath, "Files");
    array<String^>^ fileNames = System::IO::Directory::GetFiles(folderPath);
    int Filenum = Math::Abs(rand->Next(0, fileNames->Length)-46);
    String^ Filepath = fileNames[Filenum];
    return System::IO::Path::GetFileNameWithoutExtension(Filepath);
}
String^ Project3::MyForm::RandomPictureNameS()
{
    Random^ rand = gcnew Random();
    String^ projectPath = System::IO::Path::GetDirectoryName(Application::StartupPath);
    String^ folderPath = System::IO::Path::Combine(projectPath, "Files");
    array<String^>^ fileNames = System::IO::Directory::GetFiles(folderPath);
    int Filenum = Math::Abs(rand->Next(0, fileNames->Length) - 35);
    String^ Filepath = fileNames[Filenum];
    return System::IO::Path::GetFileNameWithoutExtension(Filepath);
}
String^ Project3::MyForm::RandomPictureNameT()
{
    Random^ rand = gcnew Random();
    String^ projectPath = System::IO::Path::GetDirectoryName(Application::StartupPath);
    String^ folderPath = System::IO::Path::Combine(projectPath, "Files");
    array<String^>^ fileNames = System::IO::Directory::GetFiles(folderPath);
    int Filenum = Math::Abs(rand->Next(0, fileNames->Length) - 92);
    String^ Filepath = fileNames[Filenum];
    return System::IO::Path::GetFileNameWithoutExtension(Filepath);
}
void Project3::MyForm::GenUncorrect()
{
    switch (CorrectAns)
    {
    case 1:
        SecAns->Text = RandomPictureNameF();
        ThrAns->Text = RandomPictureNameS();
        FourAns->Text = RandomPictureNameT();
        break;
    case 2:
        FirstAns->Text = RandomPictureNameT();
        ThrAns->Text = RandomPictureNameF();
        FourAns->Text = RandomPictureNameS();
        break;
    case 3:
        SecAns->Text = RandomPictureNameS();
        FirstAns->Text = RandomPictureNameT();
        FourAns->Text = RandomPictureNameF();
        break;
    case 4:
        SecAns->Text = RandomPictureNameS();
        ThrAns->Text = RandomPictureNameF();
        FirstAns->Text = RandomPictureNameT();
        break;
    }
}
void Project3::MyForm::Answer()
{
    Random^ rnd = gcnew Random();
    RandomPicture();
    CorrectAns = rnd->Next(1, 5 );
    switch (CorrectAns)
    {
    case 1:
        this->FirstAns->Text = CorFilename;
        break;
    case 2:
        this->SecAns->Text = CorFilename;
        break;
    case 3:
        this->ThrAns->Text = CorFilename;
        break;
    case 4:
        this->FourAns->Text = CorFilename;
        break;
    }
}

System::Void Project3::MyForm::ButtonLeave_Click(System::Object^ sender, System::EventArgs^ e)
{
    Application::Exit();
}

System::Void Project3::MyForm::StartButton_Click(System::Object^ sender, System::EventArgs^ e)
{
    MainLabel->Enabled = false;
    MainLabel->Visible = false;
    StartButton->Enabled = false; // ��� �� �������� ��� �� ���������
    StartButton->Visible = false;
    FirstAns->Enabled = true;
    FirstAns->Visible = true;
    SecAns->Enabled = true;
    SecAns->Visible = true;
    ThrAns->Enabled = true;
    ThrAns->Visible = true;
    FourAns->Enabled = true;
    FourAns->Visible = true;
    play = true;
    String^ projectPath = System::IO::Path::GetDirectoryName(Application::StartupPath); //����� ���� �� ������
    String^ folderPath = System::IO::Path::Combine(projectPath, "sound.wav"); // ������� ������
    System::Media::SoundPlayer^ simpleSound = gcnew // ������ ����� Sp
    System::Media::SoundPlayer(folderPath);
    simpleSound->PlayLooping();//���������� ������
    Game(); 

}

System::Void Project3::MyForm::ButtonInfo_Click(System::Object^ sender, System::EventArgs^ e)
{
    MessageBox::Show("���� ������\n������ ����\n��� ������ ��� ���� �� ������� ���\n����� �� ������ ����\nV 1.0");
    return System::Void();
}

System::Void Project3::MyForm::FirstAns_Click(System::Object^ sender, System::EventArgs^ e)
{
    if (CorrectAns == 1)
    {
        correctcount++;
    }
    allcount++;
    Game();
}
System::Void Project3::MyForm::SecAns_Click(System::Object^ sender, System::EventArgs^ e)
{
    if (CorrectAns == 2)
    {
        correctcount++;
    }
    allcount++;
    Game();
}
System::Void Project3::MyForm::ThrAns_Click(System::Object^ sender, System::EventArgs^ e)
{
    if (CorrectAns == 3)
    {
        correctcount++;
    }
    allcount++;
    Game();
}

System::Void Project3::MyForm::FourAns_Click(System::Object^ sender, System::EventArgs^ e)
{
    if (CorrectAns == 4)
    {
        correctcount++;
    }
    allcount++;
    Game();
}


