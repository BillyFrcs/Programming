Imports System

Module Program
    Sub Main(args As String())
        ' Basic input information
        Console.Write("Enter your name: ")

        ' Ask for information
        Dim name = Console.ReadLine()
        Console.WriteLine($"Yooo {name}") ' Print the information

        Console.Write(vbCrLf + "Enter your age: ")
        Dim age As Byte = Console.ReadLine()

        Console.WriteLine($"Your age is {age}")
    End Sub
End Module
