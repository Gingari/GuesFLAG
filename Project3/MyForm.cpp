#include "MyForm.h" // Включает заголовочный файл для класса MyForm  

using namespace System; // Указывает пространство имен для использования  
using namespace System::Windows::Forms; // Указывает пространство имен для Windows Forms  

[STAThreadAttribute] // позволяет работать с текстом  

int main(array<String^>^ args) { // Точка входа в приложение, принимает массив строк в качестве аргументов  
    Application::SetCompatibleTextRenderingDefault(false); // Устанавливает совместимость с отображением текста по умолчанию в значение false  
    Application::EnableVisualStyles(); // Включает визуальные стили для приложения  
    Project3::MyForm form; // Создает экземпляр класса MyForm из пространства имен Project5(Project5 - название проекта)  
    Application::Run(% form); // Запускает приложение и запускает основной цикл обработки сообщений для указанной формы  

}
void Project3::MyForm::Game()
{
        Answer();
        GenUncorrect();
        this->Recordlabel->Text = System::Convert::ToString(correctcount) + " | " + System::Convert::ToString(allcount);
}
void Project3::MyForm::RandomPicture()
{
    Random^ rand1 = gcnew Random(); // рандомное что то
    String^ projectPath = System::IO::Path::GetDirectoryName(Application::StartupPath); // узнаём путь к игре
    String^ folderPath = System::IO::Path::Combine(projectPath, "Files"); // находим папку с картинками
    array<String^>^ fileNames = System::IO::Directory::GetFiles(folderPath); // получаем все файлы
    CorFilenum = rand1->Next(0, fileNames->Length); // рандомим случайный файл
    String^ Filepath = fileNames[CorFilenum];   // узнаём его путь
    FlagPicture->Image = Image::FromFile(fileNames[CorFilenum]); //вставляем по пути
    CorFilename = System::IO::Path::GetFileNameWithoutExtension(Filepath); // узнаём имя
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
    StartButton->Enabled = false; // что то включаем что то отключаем
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
    String^ projectPath = System::IO::Path::GetDirectoryName(Application::StartupPath); //узнаём путь до музыки
    String^ folderPath = System::IO::Path::Combine(projectPath, "sound.wav"); // находим музыку
    System::Media::SoundPlayer^ simpleSound = gcnew // создаём новый Sp
    System::Media::SoundPlayer(folderPath);
    simpleSound->PlayLooping();//бесконечно играем
    Game(); 

}

System::Void Project3::MyForm::ButtonInfo_Click(System::Object^ sender, System::EventArgs^ e)
{
    MessageBox::Show("Игра крутая\nРазраб даун\nПак флагов был взят из надёжных рук\nБагов не должно быть\nV 1.0");
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


