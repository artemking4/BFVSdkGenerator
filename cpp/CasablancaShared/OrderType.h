// Object: OrderType
// RuntimeId: 9774
// TypeInfo: 0x0000000144D35FB0

namespace CasablancaShared {
    enum OrderType {
        OrderType_None = 0,
        OrderType_RequestHeal = 1,
        OrderType_LetMeHeal = 2,
        OrderType_RequestAmmo = 3,
        OrderType_LetMeGiveAmmo = 4,
        OrderType_LetMeRepair = 5,
        OrderType_RequestRepair = 6,
        OrderType_RequestRide = 7,
        OrderType_RequestRevive = 8,
        OrderType_LetMeRevive = 9,
        OrderType_GoGoGo = 10,
        OrderType_FollowMe = 11,
        OrderType_Negative = 12,
        OrderType_Sorry = 13,
        OrderType_ThankYou = 14,
        OrderType_RogerThat = 15,
        OrderType_NeedBackup = 16,
        OrderType_GetIn = 17,
        OrderType_GetOut = 18,
        OrderType_Attack = 19,
        OrderType_RequestSquadOrder = 20,
        OrderType_RequestCommanderOrder = 21,
        OrderType_RequestSupply = 22,
        OrderType_RequestVehicle = 23,
        OrderType_RequestScan = 24,
        OrderType_AcceptOrder = 25,
        OrderType_DenyOrder = 26,
        OrderType_RequestComm = 27,
        OrderType_Count = 28
    };
}