
class Program
{
    public static void Main(string[] args)
    {
        int [] vertices = { 1, 2, 3, 4, 5 };
        int[,] peso =
        {
            { 0, 2, 3, 0, 0},
            { 2, 0, 2, 4, 0},
            { 3, 2, 0, 0, 3},
            { 0, 4, 0, 0, 2},
            { 0, 0, 3, 2, 0}
        };

        int source = 0;

        Dijkstra(vertices, peso, source);
    }

    public static void Dijkstra(int [] vertices, int[,] peso, int source)
    {
        int numeroDeVertices = vertices.Length;
        int [] distancia = new int[numeroDeVertices];
        bool [] verificado = new bool[numeroDeVertices];

        for (int i = 0; i < numeroDeVertices; i++)
        {
            distancia[i] = int.MaxValue;
            verificado[i] = false;
        }

        distancia[source] = 0;

        for (int count = 0; count < numeroDeVertices - 1; count++)
        {
            int menorCaminho = calcularMenorDistancia(distancia, verificado, numeroDeVertices);

            verificado[menorCaminho] = true;

            for (int v = 0; v < numeroDeVertices; v++)
            {
                if (!verificado[v] && peso[menorCaminho, v] != 0 && distancia[menorCaminho] != int.MaxValue && distancia[menorCaminho] + peso[menorCaminho, v] < distancia [v]) 
                {
                    distancia[v] = distancia[menorCaminho] + peso[menorCaminho, v];
                }
            }

        }

        Console.WriteLine("vertice    MenorDistancia");
        for (int i = 0; i < numeroDeVertices; i++)
        {
            Console.WriteLine( vertices[i] + "\t\t" + distancia[i]);

        }
    }

    public static int calcularMenorDistancia(int [] distancia, bool [] verificado ,int n )
    {
        int menorDistancia = int.MaxValue;
        int menorIndex = -1;

        for(int contador = 0; contador < n; contador++)
        {
            if(verificado[contador] == false && distancia[contador] <= menorDistancia)
            {
                menorDistancia = distancia[contador];
                menorIndex = contador;
            }
        }

        return menorIndex;
    }
}
