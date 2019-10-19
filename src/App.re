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

  let header = style([
    fontSize(rem(5.))
  ])
};

[@react.component]
let make = () =>
  <div className=Styles.wrapper>
    <h1 className=Styles.header>
      {React.string("0ZJ4SZ G0LDB3RG")}
      <Generator />
    </h1>
  </div>
