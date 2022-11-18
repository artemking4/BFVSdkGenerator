// Object: AntEnumeration
// ClassId: 106
// RuntimeId: 61064
// TypeInfo: 0x0000000144E97810
#include "../Core/DataContainer.h"
#include "../Ant/AntRef.h"
#include "../Global/Int32.h"

#pragma pack(push, 8)
namespace GameShared {
    class AntEnumeration : public Core::DataContainer {
        Ant::AntRef AntAsset; // 0x18
        Int32 Value; // 0x2C
    }; // 0x30
    static_assert(sizeof(AntEnumeration) == 0x30);
}
#pragma pack(pop)