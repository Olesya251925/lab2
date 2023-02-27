/**************************
* Лабораторная работа № 2 *
***************************/
using System;
 namespace LabTwo {
   public class Singleton {
    public static Singleton Instance {
      get {
        if (instance == null) instance = new Singleton();
        return instance;
      }
    }
    public void MenuVariants() {
      Console.WriteLine("1 - Новый документ");
      Console.WriteLine("2 - Все документы");
      Console.WriteLine("3 - Выйти");

      string choice = Console.ReadLine();
        switch (choice) {
          case "1":
            DocumentMenu();
            break;
          case "2":
            ListAllDocuments();
            break;
          case "3":
            Environment.Exit(0);
            break;
          default:
          Console.WriteLine("Ошибка. Документ не существует");
            break;
        }
        MenuVariants();
      }

      private void DocumentMenu() {
      ElDocum Information = new ElDocum {
        Name = "Игры, в которые играют люди",
        Authors = "Эрик Берн",
        Subject = "Психология",
        PathToFaile = "https://www.litres.ru/erik",
        KeyWords = new string[] { "Игры; ", "Люди; "},
      };
      DocumentOutput(Information);

      Console.WriteLine("Введите документ, которым интересуетесь: ");
      Console.WriteLine("1. MS Word\n2. PDF\n3. MS Excel\n4. TXT\n5. HTML");
      string choice = Console.ReadLine();

      switch (choice) {
        case "1":
        ElDocum InformationWord = new Word {
          LetterSize = 14,
          LetterFont = "Times New Roman",
          ElapsedTime = 254,
        };
        DocumentOutput(InformationWord);
        break;
         
        case "2":
        ElDocum InformationPDF = new PDF {
          Title = "Компьютер",
          NumberPages = 56,
        };
        DocumentOutput(InformationPDF);
        break;
         
        case "3":
        ElDocum InformationExcel = new Excel {
          NumberColumns = 6,
          NumberRows = 9,
        };
        DocumentOutput(InformationExcel);
        break;
                 
        case "4":
        ElDocum InformationTXT = new TXT {
          DateCreation = "15.09.2018",
          Language = "Русский",
        };
        DocumentOutput(InformationTXT);
        break;
         
        case "5":
        ElDocum InformationHTML = new HTML {
          DateCreation = "18.02.2020",
          ElapsedTime = 156,
        };
        DocumentOutput(InformationHTML);
        break;
        default:
        Console.WriteLine("Данный документ не существует");
        break;
        }
      }
      private void ListAllDocuments() {
        Console.WriteLine("Список документов:");

        foreach (ElDocum doc in documents) {
          Console.WriteLine(doc.OutputLines());
        }
        Console.WriteLine();
      }
      private Singleton(){}
      private static Singleton instance
    }
    internal class Program {
      static void Main(string[] args) {
        Singleton.Instance.Method();
        Console.ReadKey();
      }
   }
}
