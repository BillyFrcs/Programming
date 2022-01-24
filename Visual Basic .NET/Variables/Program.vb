Imports System

Module Program
    ' Enumeration
    Enum Colors
        BLUE = 10
        GREEN = 4
        RED = 9
        YELLOW = 67
    End Enum

    Sub Main(args As String())
        Dim x As Short = 19
        Dim y As Integer = 65
        Dim z As Decimal = x + y

        Console.WriteLine("Result: {0}", z)

        If z >= 5 Then
            z = 80.5F
            Console.WriteLine("Update Z:" & Str(z)) ' Convert to String
        End If

        ' Constant variable
        Const message As String = "Yooo"
        Console.WriteLine("Billy says {0}", message)

        ' Simple color program using Enumeration
        Console.Write("Enter a color(Blue, Green, Red, Yellow): ")
        Dim color As String = Console.ReadLine

        If (color = "Blue" Or color = "blue") Then
            Console.WriteLine($"Value Of {color} color is " & Colors.BLUE)
        ElseIf (color = "Green" Or color = "green") Then
            Console.WriteLine($"Value Of {color} color is " & Colors.GREEN)
        ElseIf (color = "Red" Or color = "red") Then
            Console.WriteLine($"Value Of {color} color is " & Colors.RED)
        ElseIf (color = "Yellow" Or color = "yellow") Then
            Console.WriteLine($"Value Of {color} color is " & Colors.YELLOW)
        Else
            Throw New Exception("Invalid color!")
        End If

        Console.ReadKey()

    End Sub
End Module
