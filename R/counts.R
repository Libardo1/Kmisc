##' Generate Counts of Values in a Vector
##'
##' This function uses Rcpp sugar to implement a fast \code{table}, for
##' unique counts of a single vector. This implementation seeks to
##' produce identical output to \code{table(x, useNA="ifany")}.
##'
##' The order of \code{NA}, \code{NaN} in the output may differ -- even
##' \R is inconsistent with the order that \code{NA} and \code{NaN} elements
##' are inserted.
##'
##' @param x A numeric, integer, character or logical vector, or a (potentially
##'   nested) list of such vectors. If \code{x} is a list, we recursively apply
##'   \code{counts} throughout elements in the list.
##' @export
##' @examples
##' x <- round( rnorm(1E2), 1 )
##' counts(x)
counts <- function(x) {
  if (is.list(x)) {
    output <- rapply(x, counts, how="list")
    return(output)
  } else {
    return(.Call(CKmisc_counts, x))
  }
}
