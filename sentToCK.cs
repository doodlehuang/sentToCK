using System;

namespace sentToCK
{
    class sentToCK
    {
        static void Main(string[] args)
        {
            int msg = 1;
            int send = 0;
            for(int day = 1; day<=30; day++)
            {
                Console.WriteLine(String.Format("[ Day {0} ] Message: {1}", day, msg));
                send += msg;
                msg *= 2;
            }
            Console.WriteLine("Total sent: " + send);
            Console.ReadLine();
        }
    }
}
