// Object: SyncedMultiBoolEntityData
// ClassId: 3541
// RuntimeId: 28352
// TypeInfo: 0x0000000144EA5290
#include "../Entity/EntityData.h"
#include "../Global/Int32.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace Network {
    class SyncedMultiBoolEntityData : public Entity::EntityData {
        Int32 NumInputs; // 0x20
        Boolean In0; // 0x24
        Boolean DefaultInValue0; // 0x25
        Boolean DefaultInValue1; // 0x26
        Boolean DefaultInValue2; // 0x27
        Boolean DefaultInValue3; // 0x28
        Boolean DefaultInValue4; // 0x29
        Boolean DefaultInValue5; // 0x2A
        Boolean DefaultInValue6; // 0x2B
        Boolean DefaultInValue7; // 0x2C
        Boolean DefaultInValue8; // 0x2D
        Boolean DefaultInValue9; // 0x2E
        Boolean DefaultInValue10; // 0x2F
        Boolean DefaultInValue11; // 0x30
        Boolean DefaultInValue12; // 0x31
        Boolean DefaultInValue13; // 0x32
        Boolean DefaultInValue14; // 0x33
        Boolean DefaultInValue15; // 0x34
        Boolean DefaultInValue16; // 0x35
        Boolean DefaultInValue17; // 0x36
        Boolean DefaultInValue18; // 0x37
        Boolean DefaultInValue19; // 0x38
        Boolean DefaultInValue20; // 0x39
        Boolean DefaultInValue21; // 0x3A
        Boolean DefaultInValue22; // 0x3B
        Boolean DefaultInValue23; // 0x3C
        Boolean DefaultInValue24; // 0x3D
        Boolean DefaultInValue25; // 0x3E
        Boolean DefaultInValue26; // 0x3F
        Boolean DefaultInValue27; // 0x40
        Boolean DefaultInValue28; // 0x41
        Boolean DefaultInValue29; // 0x42
        Boolean DefaultInValue30; // 0x43
        Boolean DefaultInValue31; // 0x44
        char pad_0x45[0x3];
    }; // 0x48
    static_assert(sizeof(SyncedMultiBoolEntityData) == 0x48);
}
#pragma pack(pop)