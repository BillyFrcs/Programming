Imports System

Module Program
    Sub Main(args As String())
        ' If statements
        Console.Write("Enter a number: ")
        Dim value As Integer = Console.ReadLine()

        If value > 0 Then
            Console.WriteLine($"Value of {value} is positive.")
        ElseIf value = 0 Then
            Console.WriteLine($"Value of {value} is zero.")
        Else
            Console.WriteLine($"Value of {value} is negative.")
        End If
    End Sub
End Module
