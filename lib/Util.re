let make_text_christmasy = (s: string) => {
  let inner = s
   |> String.to_seq
   |> Array.of_seq
   |> Array.mapi((i, s) =>
    switch (i mod 4) {
      | x when x <=1 => <Pastel color=Green> {String.make(1,s)} </Pastel>
      | _ => <Pastel color=Red> {String.make(1,s)} </Pastel>
  })
  |> Array.to_list
  |> String.concat("")

  Pastel.(
    <Pastel>
    {inner}
    </Pastel>
  )
}