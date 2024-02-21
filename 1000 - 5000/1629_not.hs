main :: IO ()
main =
  do
    a <- getLine
    let list = words a
    let one = read (head list) :: Integer
    let two = read (list !! 1) :: Integer
    print (one ^ two :: Integer)