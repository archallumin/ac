main :: IO ()
main = do
  a <- getLine
  let list = words a
  let one = read (head list) :: Int
  let two = read (list !! 1) :: Int
  print (one + two)