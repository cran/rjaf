// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// rjaf_cpp
List rjaf_cpp(const arma::vec& y_trainest, const arma::vec& y_trainest_resid, const arma::mat& X_trainest, const arma::uvec& trt_trainest, const arma::vec& prob_trainest, const arma::uvec& cluster_trainest, const arma::mat& X_val, const unsigned int& ntrts, const unsigned int& nvars, const double& lambda1, const double& lambda2, const bool& ipw, const unsigned int& nodesize, const unsigned int& ntree, const double& prop_train, const double& eps, const bool& reg, const bool& impute, const bool& setseed, const unsigned int& seed);
RcppExport SEXP _rjaf_rjaf_cpp(SEXP y_trainestSEXP, SEXP y_trainest_residSEXP, SEXP X_trainestSEXP, SEXP trt_trainestSEXP, SEXP prob_trainestSEXP, SEXP cluster_trainestSEXP, SEXP X_valSEXP, SEXP ntrtsSEXP, SEXP nvarsSEXP, SEXP lambda1SEXP, SEXP lambda2SEXP, SEXP ipwSEXP, SEXP nodesizeSEXP, SEXP ntreeSEXP, SEXP prop_trainSEXP, SEXP epsSEXP, SEXP regSEXP, SEXP imputeSEXP, SEXP setseedSEXP, SEXP seedSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::vec& >::type y_trainest(y_trainestSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type y_trainest_resid(y_trainest_residSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type X_trainest(X_trainestSEXP);
    Rcpp::traits::input_parameter< const arma::uvec& >::type trt_trainest(trt_trainestSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type prob_trainest(prob_trainestSEXP);
    Rcpp::traits::input_parameter< const arma::uvec& >::type cluster_trainest(cluster_trainestSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type X_val(X_valSEXP);
    Rcpp::traits::input_parameter< const unsigned int& >::type ntrts(ntrtsSEXP);
    Rcpp::traits::input_parameter< const unsigned int& >::type nvars(nvarsSEXP);
    Rcpp::traits::input_parameter< const double& >::type lambda1(lambda1SEXP);
    Rcpp::traits::input_parameter< const double& >::type lambda2(lambda2SEXP);
    Rcpp::traits::input_parameter< const bool& >::type ipw(ipwSEXP);
    Rcpp::traits::input_parameter< const unsigned int& >::type nodesize(nodesizeSEXP);
    Rcpp::traits::input_parameter< const unsigned int& >::type ntree(ntreeSEXP);
    Rcpp::traits::input_parameter< const double& >::type prop_train(prop_trainSEXP);
    Rcpp::traits::input_parameter< const double& >::type eps(epsSEXP);
    Rcpp::traits::input_parameter< const bool& >::type reg(regSEXP);
    Rcpp::traits::input_parameter< const bool& >::type impute(imputeSEXP);
    Rcpp::traits::input_parameter< const bool& >::type setseed(setseedSEXP);
    Rcpp::traits::input_parameter< const unsigned int& >::type seed(seedSEXP);
    rcpp_result_gen = Rcpp::wrap(rjaf_cpp(y_trainest, y_trainest_resid, X_trainest, trt_trainest, prob_trainest, cluster_trainest, X_val, ntrts, nvars, lambda1, lambda2, ipw, nodesize, ntree, prop_train, eps, reg, impute, setseed, seed));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_rjaf_rjaf_cpp", (DL_FUNC) &_rjaf_rjaf_cpp, 20},
    {NULL, NULL, 0}
};

RcppExport void R_init_rjaf(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
