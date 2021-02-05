# Wrapper function for the Rcpp code to initiate with defaults and simulate data if requested for DTMbvs package
# DTMbvs: Dirichlet-tree Multinomial Regression Models with Bayesian Variable Selection for Microbiome Data - an R Package
SLR_wrap <- function( x, y ){
  if(length(x) != length(y)){
    stop("Bad input: different length of response and covariate")
  } else {
    return( SLRraw(x, y) )
  }
}