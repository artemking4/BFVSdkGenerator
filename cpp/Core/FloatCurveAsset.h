// Object: FloatCurveAsset
// ClassId: 501
// RuntimeId: 16389
// TypeInfo: 0x0000000144BE34E0
#include "../Core/Asset.h"
#include "../Core/FloatCurve.h"

#pragma pack(push, 8)
namespace Core {
    class FloatCurveAsset : public Core::Asset {
        Core::FloatCurve Curve; // 0x20
    }; // 0x28
    static_assert(sizeof(FloatCurveAsset) == 0x28);
}
#pragma pack(pop)