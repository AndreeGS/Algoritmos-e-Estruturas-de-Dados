

class Program
{
    public static void Main (string [] args)
    {
        int[] vertices = { 1, 2, 3, 4, 5 };
        int[,] peso =
        {
            { 0, 2, 3, 0, 0},
            { 2, 0, 2, 4, 0},
            { 3, 2, 0, 0, 3},
            { 0, 4, 0, 0, 2},
            { 0, 0, 3, 2, 0}
        };

        int inicio = 0;

        Prim(vertices, peso, inicio);

    }

    public static void Prim(int[] vertices, int[,] peso, int inicio)
    {
        int numeroDeVertices = vertices.Length;
        bool[] verificado = new bool[numeroDeVertices];
        int[] distancia = new int[numeroDeVertices];
        int[] antecessor = new int[numeroDeVertices];

        for(int i = 0; i < numeroDeVertices; i++)
        {
            verificado[i] = false;
            distancia[i] = int.MaxValue;
            antecessor[i] = -1;
        }

        distancia[inicio] = 0;

        for (int i = 0; i < numeroDeVertices; i++)
        {
            int valorMenor = menorDistancia(verificado, numeroDeVertices, distancia);

            verificado[i] = true;

            for (int j = 0; j < numeroDeVertices; j++)
            {
                if (!verificado[j] && peso[valorMenor, j] != 0 && peso[valorMenor, j] < distancia[j])
                {
                    antecessor[j] = valorMenor;
                    distancia[j] = peso[valorMenor, j];
                }
            }
        }

        for(int i = 0; i < numeroDeVertices; i++)
        {
            Console.WriteLine(distancia[i]);
        }
        
    }

    public static int menorDistancia( bool [] vertices, int numeroDeVertices, int[] distancia)
    {
        int menordistancia = int.MaxValue;
        int menorIndex = -1;

        for(int i = 0; i < numeroDeVertices; i++)
        {
            if (vertices[i] == false && distancia[i] <= menordistancia)
            {
                menordistancia = distancia[i];
                menorIndex = i;
            }
        }

        return menorIndex;
    }
}