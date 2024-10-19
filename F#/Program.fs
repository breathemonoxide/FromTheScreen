open System

[<EntryPoint>]
let main argv =
    Console.WriteLine("don't say 'ksi i love you' ")
    let userInput = Console.ReadLine().ToLower()

  
    match userInput with
    | "ksi i love you" -> Console.WriteLine("So basically F# did not want to let me paste the lyrics and its 12:51AM so no thank you :)")
    | _ ->
        Console.WriteLine("you got lucky")

    0 
