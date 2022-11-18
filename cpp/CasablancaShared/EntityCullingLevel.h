// Object: EntityCullingLevel
// RuntimeId: 1270
// TypeInfo: 0x0000000144D28480

namespace CasablancaShared {
    enum EntityCullingLevel {
        EntityCullingLevel_None = 0,
        EntityCullingLevel_Distance = 1,
        EntityCullingLevel_InViewOtherwiseReduce = 2,
        EntityCullingLevel_InView = 3,
        EntityCullingLevel_ForceCull = 4
    };
}