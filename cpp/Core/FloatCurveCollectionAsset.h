// Object: FloatCurveCollectionAsset
// ClassId: 502
// RuntimeId: 58094
// TypeInfo: 0x0000000144BE3460
#include "../Core/Asset.h"
#include "../Core/FloatCurve.h"

#pragma pack(push, 8)
namespace Core {
    class FloatCurveCollectionAsset : public Core::Asset {
        Array<Core::FloatCurve> Curves; // 0x20
    }; // 0x28
    static_assert(sizeof(FloatCurveCollectionAsset) == 0x28);
}
#pragma pack(pop)