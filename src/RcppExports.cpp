// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppEigen.h>
#include <Rcpp.h>

using namespace Rcpp;

// cholupdateL_rcpp
Eigen::MatrixXd cholupdateL_rcpp(const Eigen::Map<Eigen::MatrixXd>& L, const Eigen::Map<Eigen::MatrixXd>& V12, const Eigen::Map<Eigen::MatrixXd>& V22);
RcppExport SEXP _GauProMod_cholupdateL_rcpp(SEXP LSEXP, SEXP V12SEXP, SEXP V22SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::MatrixXd>& >::type L(LSEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::MatrixXd>& >::type V12(V12SEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::MatrixXd>& >::type V22(V22SEXP);
    rcpp_result_gen = Rcpp::wrap(cholupdateL_rcpp(L, V12, V22));
    return rcpp_result_gen;
END_RCPP
}
// cholfac_rcpp
Eigen::MatrixXd cholfac_rcpp(const Eigen::Map<Eigen::MatrixXd>& A);
RcppExport SEXP _GauProMod_cholfac_rcpp(SEXP ASEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::MatrixXd>& >::type A(ASEXP);
    rcpp_result_gen = Rcpp::wrap(cholfac_rcpp(A));
    return rcpp_result_gen;
END_RCPP
}
// GPpred_rcpp
Rcpp::List GPpred_rcpp(const Eigen::Map<Eigen::MatrixXd>& K, const Eigen::Map<Eigen::MatrixXd>& Kstar, const Eigen::Map<Eigen::MatrixXd>& Kstarstar, const Eigen::Map<Eigen::MatrixXd>& y);
RcppExport SEXP _GauProMod_GPpred_rcpp(SEXP KSEXP, SEXP KstarSEXP, SEXP KstarstarSEXP, SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::MatrixXd>& >::type K(KSEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::MatrixXd>& >::type Kstar(KstarSEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::MatrixXd>& >::type Kstarstar(KstarstarSEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::MatrixXd>& >::type y(ySEXP);
    rcpp_result_gen = Rcpp::wrap(GPpred_rcpp(K, Kstar, Kstarstar, y));
    return rcpp_result_gen;
END_RCPP
}
// GPpredmean_rcpp
Rcpp::List GPpredmean_rcpp(const Eigen::Map<Eigen::MatrixXd>& K, const Eigen::Map<Eigen::MatrixXd>& Kstar, const Eigen::Map<Eigen::MatrixXd>& Kstarstar, const Eigen::Map<Eigen::VectorXd>& y, const Eigen::Map<Eigen::MatrixXd>& H, const Eigen::Map<Eigen::MatrixXd>& Hstar);
RcppExport SEXP _GauProMod_GPpredmean_rcpp(SEXP KSEXP, SEXP KstarSEXP, SEXP KstarstarSEXP, SEXP ySEXP, SEXP HSEXP, SEXP HstarSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::MatrixXd>& >::type K(KSEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::MatrixXd>& >::type Kstar(KstarSEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::MatrixXd>& >::type Kstarstar(KstarstarSEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::VectorXd>& >::type y(ySEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::MatrixXd>& >::type H(HSEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::MatrixXd>& >::type Hstar(HstarSEXP);
    rcpp_result_gen = Rcpp::wrap(GPpredmean_rcpp(K, Kstar, Kstarstar, y, H, Hstar));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_GauProMod_cholupdateL_rcpp", (DL_FUNC) &_GauProMod_cholupdateL_rcpp, 3},
    {"_GauProMod_cholfac_rcpp", (DL_FUNC) &_GauProMod_cholfac_rcpp, 1},
    {"_GauProMod_GPpred_rcpp", (DL_FUNC) &_GauProMod_GPpred_rcpp, 4},
    {"_GauProMod_GPpredmean_rcpp", (DL_FUNC) &_GauProMod_GPpredmean_rcpp, 6},
    {NULL, NULL, 0}
};

RcppExport void R_init_GauProMod(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
