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

        Selected()

        Console.WriteLine($"Sum {Sum(value + value)}")

        Console.WriteLine("Fibonacci {0}", Fibonacci(value))

    End Sub

    Private Sub Selected()
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

    Private Function Sum(ByVal number As Integer) As Integer
        Return number
    End Function

    ' Fibonacci program with time complexity O2n
    Private Function Fibonacci(ByVal N As Integer)
        If N <= 1 Then
            Return N
        End If

        Return Fibonacci(N - 1) + Fibonacci(N - 2)
    End Function

End Module
