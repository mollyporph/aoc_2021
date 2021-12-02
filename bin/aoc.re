let readAllText = (fileName: string) => {
  let file_in_channel = Stdlib.open_in(fileName)
  let s = Stdlib.in_channel_length(file_in_channel) |> Stdlib.really_input_string(file_in_channel)
  Stdlib.close_in(file_in_channel)
  s
}



let () = 
readAllText("inputs/1.txt") 
|> Lib.Example.solve
|> Lib.Util.make_text_christmasy
|> print_endline;
