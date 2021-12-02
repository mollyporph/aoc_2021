let readAllText = (fileName: string ) => {
    let file_in_channel = Stdlib.open_in(fileName)
    let break = ref(false);
    let lineArray = ref([])
    while(!break^) {
      let line = try(Stdlib.input_line(file_in_channel)) {
        | End_of_file => {break := true;""}
      }
      lineArray := lineArray^ @ [line];
      ()
    }
    let returnString = lineArray^ |> String.concat("")
    Stdlib.close_in(file_in_channel)
    returnString
}



let () = readAllText("inputs/1.txt") 
|> Lib.Example.solve
|> Lib.Util.make_text_christmasy
|> print_endline;
