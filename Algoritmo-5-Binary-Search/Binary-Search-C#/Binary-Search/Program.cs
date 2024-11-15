﻿using System;

class Program
{

    public static void Main(string[] args)
    {
        List<int> list = new List<int>();
        int select;
        Console.WriteLine("Welcome to Algorithm of Binary-Search! \nIn this algorithm i'll studying what binary search behavior looks like...");

        do
        {

            Console.WriteLine("\nWhat do you want to do?");
            Console.WriteLine("1 - Insert values in to List");
            Console.WriteLine("2 - Order List");
            Console.WriteLine("3 - Search values");
            Console.WriteLine("4 - Viewing List");
            Console.WriteLine("5 - Leave the program");


            select = int.Parse(Console.ReadLine());

            switch (select)
            {
                case 1:
                    Console.Write("How many values do you want to add? ");
                    select = int.Parse(Console.ReadLine());

                    for (int i = 1; i <= select; i++)
                    {
                        Console.WriteLine($"\nEnter the position value {i}: ");
                        int value = int.Parse(Console.ReadLine());

                        list.Add(value);
                    }
                    Console.WriteLine("\nValues Added Successfully");
                    break;
                case 2:
                    Console.WriteLine("Ordening list...");
                    list.Sort();

                    break;
                case 3:
                    Console.WriteLine("\nWhat value do you want search?");
                    int valueToSearching = int.Parse(Console.ReadLine());

                    list.Sort();

                    Console.WriteLine("\nThe list was ordened...");

                    int index = list.BinarySearch(valueToSearching);

                    if (index >= 0)
                    {
                        Console.WriteLine($"\nValue found at index: {index}");
                    }
                    else
                    {
                        Console.WriteLine("\nValue not found in the list.");
                    }

                    break;
                case 4:
                    Console.WriteLine("\nItens in list: ");

                    foreach (int i in list)
                    {
                        Console.Write(i + "; ");
                    }

                    break;
                case 5:
                    Console.WriteLine("Thank you!");
                    break;
            }


        } while (select != 5);

    }
}