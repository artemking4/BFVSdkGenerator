// Object: TonemapMethod
// RuntimeId: 39090
// TypeInfo: 0x0000000144F1BF20

namespace Render {
    enum TonemapMethod {
        TonemapMethod_None = 5,
        TonemapMethod_Linear = 0,
        TonemapMethod_Filmic = 1,
        TonemapMethod_FilmicNeutral = 2,
        TonemapMethod_LinearApproxGamma = 3,
        TonemapMethod_Parametric = 4,
        TonemapMethodCount = 5
    };
}