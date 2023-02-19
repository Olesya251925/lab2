/**************************
* Лабораторная работа № 2 *
*        MS Word          *
***************************/
using System;
using System.Reflection.Emit;

namespace ConsoleApp{
  class PDF {
	public string DateCreation { get; set; }
    public string DateChange { get; set; }
    public string Size { get; set; }
    public string Password { get; set; }
    public PDF() { }

	public PDF(
	  string Name,
      string Author,
      string [] Keywords,
      string Subjects,
      string Path,
      string DateCreation,
      string DateChange,
      string Size,
      string Password
    ) : base(Name, Author, Keywords, Subjects, Path){
          this.DateOfCreation = DateOfCreation;
          this.DateOfChange = DateOfChange;
          this.Size = Size;
          this.Password = Password;
        }
		
		public PDF(string Name) : base(Name) { }
        public override void PrintValues() {
		  string ParameterValue = "";

		  Console.Write("Тип файла: ");
		  Console.WriteLine("PDF");
          base.ValueParameter();

		if (this.DateCreation == "") {
            ValueParameter = "Не существует";
        } else {
            ValueParameter = this.DateCreation;
          }

          base.Print("Дата создания: ", ValueParameter);
          ValueParameter = "";

          if (this.DateChange == "") {
            ValueParameter = "Не существует";
          } else{
            ValueParameter = this.DateChange;
          }

          base.Print("Дата изменения: ", ValueParameter);
          ValueParameter = "";

          if (this.Size == "") {
            ParameterValue = "Не существует";
          } else {
              ParameterValue = this.Size;
            }
            
            base.Print("Размер файла: ", ParameterValue);
            ParameterValue = "";

            if (this.Password == "") {
              ParameterValue = "Не существует";
            } else {
              ParameterValue = this.Password;
            }
            base.Print("Введите пароль: ", ParameterValue);
        }
    }
}
