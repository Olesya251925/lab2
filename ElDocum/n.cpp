/**************************
* Лабораторная работа № 2 *
***************************/
using System;
namespace ConsoleApp {
  internal class Program {
    private static void DocumentOutput (ElDocum) {
      Eldoc.PrintValues();
    }
    static void Main(string[] args) {
      ElDocum Information = new ElDocum {
        Name = "Игры, в которые играют люди",
        Authors = "Эрик Берн",
        Theme = "Психология",
        PathToFaile = "https://www.litres.ru/erik",
        KeyWords = new string[] { "Игры; ", "Люди; },
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
        Console.WriteLine("Такого документа нет!");
        break;
      }
    }
  }
}