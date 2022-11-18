// Object: DensityMap_FilterType
// RuntimeId: 42813
// TypeInfo: 0x0000000144EB05B0

namespace TerrainBase {
    enum DensityMap_FilterType {
        DensityMapFilter_SecondOrderDifference = 0,
        DensityMapFilter_GaussianCurvature = 1,
        DensityMapFilter_MeanCurvature = 2,
        DensityMapFilter_LaplaceBeltrami = 3,
        DensityMapFilter_LaplaceBeltramiNoVoronoi = 4
    };
}