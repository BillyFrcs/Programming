Imports System

Module Program
    Sub Main(args As String())
        ' Boolean 
        Dim isStart As Boolean = True
        Console.WriteLine($"Start {isStart}")

        ' Integer
        Dim value As Integer = 20
        Console.WriteLine($"Value {value}")

        ' Byte
        Dim number As Byte = 19
        Console.WriteLine($"Number: {number}")
        
        ' Decimal(Float)
        Dim decimalNumber As Decimal = 4.5F
        Console.WriteLine($"Decimal {decimalNumber}")

        ' Double
        Dim doubleNumber As Double = 10.54D
        Console.WriteLine($"Decimal number {doubleNumber}")

        ' String
        Dim name As String = "Billy"
        Console.WriteLine($"Name: {name.ToUpper}")

        ' Char
        Dim alphabet As Char = "B"
        Console.WriteLine($"Alphabet {alphabet}")
    End Sub
End Module
