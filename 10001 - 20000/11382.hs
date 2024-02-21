main :: IO ()
main = do
  a <- getLine
  let list = words a
  let x = read (head list) :: Integer
  let y = read (list !! 1) :: Integer
  let z = read (list !! 2) :: Integer
  print (x + y + z :: Integer)