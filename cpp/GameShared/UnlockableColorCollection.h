// Object: UnlockableColorCollection
// ClassId: 5556
// RuntimeId: 44909
// TypeInfo: 0x0000000144E819C0
#include "../Core/DataContainer.h"
#include "../GameShared/ColorReference.h"
#include "../GameShared/ColorUnlockPartData.h"

#pragma pack(push, 8)
namespace GameShared {
    class UnlockableColorCollection : public Core::DataContainer {
        GameShared::ColorReference DefaultValue; // 0x18
        Array<GameShared::ColorUnlockPartData> PossibleValues; // 0x20
    }; // 0x28
    static_assert(sizeof(UnlockableColorCollection) == 0x28);
}
#pragma pack(pop)