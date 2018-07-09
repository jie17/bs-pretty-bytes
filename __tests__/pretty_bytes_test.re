open Jest;

open PrettyBytes;

describe("Expect", () => {
  open Expect;

  test("toBe", () =>
    expect(prettyBytes(1337)) |> toBe("1.34 kB"))
});
