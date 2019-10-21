[@bs.module]
external bg : string = "./assets/bg.png"

module Styles = {
  open Css;

  Css.global("body", [margin(px(0)), padding(px(0)), height(vh(100.))]);
  Css.global("#app", [height(pct(100.))]);

  let wrapper = style([
    height(pct(100.)),
    display(flexBox),
    alignItems(center),
    justifyContent(center),
    fontFamily(Theme.fontName),
    backgroundColor(hex("0E223B")),
    color(hex("F8C50B"))
  ])

  let container = style([
    maxWidth(px(700)),
    position(relative),
    textAlign(`right),
    display(flexBox),
    padding(rem(0.5)),
    before([
      opacity(0.2),
      position(absolute),
      display(block),
      contentRule("&"),
      fontSize(rem(8.)),
      right(px(0)),
    ])
  ])

  let jumbo = style([
    opacity(0.5),
    position(absolute),
    top(px(-50)),
  ])

  let header = style([
    fontSize(rem(5.)),
    paddingLeft(rem(10.))
  ])
};

[@react.component]
let make = () =>
  <div className=Styles.wrapper>
    <div className=Styles.container>
      <img src=bg className=Styles.jumbo />
      <h1 className=Styles.header>
        <Generator />
      </h1>
    </div>
  </div>
