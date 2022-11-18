// Object: BFUIGraphData
// ClassId: 1211
// RuntimeId: 1147
// TypeInfo: 0x0000000144D9CF90
#include "../Core/DataContainer.h"
#include "../Core/Vec2.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIGraphData : public Core::DataContainer {
        Array<Core::Vec2> Points; // 0x18
        Core::Vec2 Min; // 0x20
        Core::Vec2 Max; // 0x28
    }; // 0x30
    static_assert(sizeof(BFUIGraphData) == 0x30);
}
#pragma pack(pop)