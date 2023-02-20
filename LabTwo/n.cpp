/**************************
* Лабораторная работа № 2 *
***************************/
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace LabTwo{
  public static class Singleton {
    public string Name { get; set; }
    public string Author { get; set; }
    public string [] Keywords { get; set; }
    public string Subjects { get; set; }
    public string Path { get; set; }

    public Singleton (string name, string author, string[] keywords, string subjects, string path){
      Namt = name;
      Author = author;
      Keywords = keywords;
      Subjects = subjects;
      Path = path;
    }
    public static class OutputLines();
  }
}
