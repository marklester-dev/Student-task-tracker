using System;
using System.Collections.Generic;

class TaskTracker
{
    static void Main()
    {
        List<string> tasks = new List<string>();
        bool running = true;

        while (running)
        {
            Console.WriteLine("\n=== STUDENT TASK TRACKER ===");
            Console.WriteLine("1. Add Task");
            Console.WriteLine("2. View Tasks");
            Console.WriteLine("3. Exit");
            Console.Write("Choose an option: ");

            string choice = Console.ReadLine();

            switch (choice)
            {
                case "1":
                    Console.Write("Enter task: ");
                    string task = Console.ReadLine();
                    tasks.Add(task);
                    Console.WriteLine("Task added!");
                    break;
                case "2":
                    Console.WriteLine("\nYour Tasks:");
                    for (int i = 0; i < tasks.Count; i++)
                    {
                        Console.WriteLine($"{i + 1}. {tasks[i]}");
                    }
                    break;
                case "3":
                    running = false;
                    Console.WriteLine("Goodbye!");
                    break;
                default:
                    Console.WriteLine("Invalid option.");
                    break;
            }
        }
    }
}
