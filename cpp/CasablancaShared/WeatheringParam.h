// Object: WeatheringParam
// ClassId: 5712
// RuntimeId: 53972
// TypeInfo: 0x0000000144CFB350
#include "../Core/DataContainer.h"
#include "../Global/Int32.h"
#include "../CasablancaShared/WeatheringOp.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class WeatheringParam : public Core::DataContainer {
        Int32 Id; // 0x18
        char pad_0x1C[0x4];
        CasablancaShared::WeatheringOp WeatherOperation; // 0x20
    }; // 0x28
    static_assert(sizeof(WeatheringParam) == 0x28);
}
#pragma pack(pop)