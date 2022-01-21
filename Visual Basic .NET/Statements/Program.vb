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

        ' Select case
        Dim weapon = "M4"

        Select Case weapon
            Case "M4"
                Console.WriteLine($"Player use {weapon}")
            Case "AK47"
                Console.WriteLine($"Player use {weapon}")
            Case Else
                Console.WriteLine("Player didn't use weapon")
        End Select
    End Sub
End Module
