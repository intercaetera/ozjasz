module Styles = {
  open Css;

  let quote = style([
    fontSize(rem(1.5)),
    maxWidth(px(960)),
    margin(auto),
    fontWeight(light)
  ])
}

let randomFromList = list => {
  Random.init(int_of_float(Js.Date.now()));

  let index = Random.int(List.length(list));
  List.nth(list, index);
};

let arrayToStringReducer = (accumulator, element) => String.concat(" ", [accumulator, element]);

let generateSentence = db => Array.fold_left(arrayToStringReducer, "", Array.map(randomFromList, db));

[@react.component]
let make = () =>
  <div className=Styles.quote>
    {React.string(generateSentence(Database.db))}
  </div>
