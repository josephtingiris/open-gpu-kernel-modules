/*
 * SPDX-FileCopyrightText: Copyright (c) 2009 - 2022 NVIDIA CORPORATION & AFFILIATES. All rights reserved.
 * SPDX-License-Identifier: MIT
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
 * THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 * DEALINGS IN THE SOFTWARE.
*/
/*
 * This header file contains the 3-character Plug and Play Vendor IDs and
 * their translation into Vendor names.
 *
 * If the includer defines NV_PNP_VENDOR_IDS_USE_TCHAR, then
 * PNPVendorID::vendorName will have type const TCHAR*; otherwise, it will have
 * type const char*.
 *
 * References:
 *  https://uefi.org/pnp_id_list
 *
 */ 

#ifndef __NV_PNP_VENDOR_IDS_H__
#define __NV_PNP_VENDOR_IDS_H__

#if defined(NV_PNP_VENDOR_IDS_USE_TCHAR)
    #define _VENDOR_NAME_TYPE const TCHAR
    #define _VENDOR_NAME_ENTRY(x) _T(x)
#else
    #define _VENDOR_NAME_TYPE const char
    #define _VENDOR_NAME_ENTRY(x) (x)
#endif

typedef struct tagPNPVendorID
{
    char               vendorId[4]; // PNP Vendor ID (example: "SNY")
    _VENDOR_NAME_TYPE* vendorName;  // Vendor name for display (example: "Sony")
} PNPVendorId;


/*
 * The PNPVendorIds[] table maps between the 3-character Plug and
 * Play Vendor Identifiers and user-friendly vendor names
 */
static const PNPVendorId PNPVendorIds[] =
{
    { "___",    _VENDOR_NAME_ENTRY("Targa")                             },
    { "@@@",    _VENDOR_NAME_ENTRY("Sangyo")                            },

    { "AAA",    _VENDOR_NAME_ENTRY("Avolites Ltd")                      },
    { "AAC",    _VENDOR_NAME_ENTRY("Acer")                              },
    { "ABC",    _VENDOR_NAME_ENTRY("AboCom System Inc")                 },
    { "ABP",    _VENDOR_NAME_ENTRY("Advanced System Products")          },
    { "ACE",    _VENDOR_NAME_ENTRY("ACME")                              },
    { "ACC",    _VENDOR_NAME_ENTRY("ACCTON")                            },
    { "ACI",    _VENDOR_NAME_ENTRY("Ancor Communications Inc")          },
    { "ACK",    _VENDOR_NAME_ENTRY("ACKSYS")                            },
    { "ACN",    _VENDOR_NAME_ENTRY("ACON")                              },
    { "ACR",    _VENDOR_NAME_ENTRY("Acer")                              },
    { "ACS",    _VENDOR_NAME_ENTRY("Altos/ACS")                         },
    { "ACT",    _VENDOR_NAME_ENTRY("Actebis/Targa")                     },
    { "ADI",    _VENDOR_NAME_ENTRY("ADI")                               },
    { "ADP",    _VENDOR_NAME_ENTRY("Adaptec")                           },
    { "ADT",    _VENDOR_NAME_ENTRY("ADTEK")                             },
    { "ADV",    _VENDOR_NAME_ENTRY("AMD")                               },
    { "ADX",    _VENDOR_NAME_ENTRY("ADAX")                              },
    { "AEI",    _VENDOR_NAME_ENTRY("AIR")                               },
    { "AEM",    _VENDOR_NAME_ENTRY("AEM")                               },
    { "AEO",    _VENDOR_NAME_ENTRY("UHC")                               },
    { "AGI",    _VENDOR_NAME_ENTRY("Artish Graphics")                   },
    { "AKB",    _VENDOR_NAME_ENTRY("Akebia")                            },
    { "AIC",    _VENDOR_NAME_ENTRY("Arnos Instruments")                 },
    { "AIR",    _VENDOR_NAME_ENTRY("Advanced Integrated Research")      },
    { "AKB",    _VENDOR_NAME_ENTRY("Akebia")                            },
    { "ALA",    _VENDOR_NAME_ENTRY("Alacron")                           },
    { "ALR",    _VENDOR_NAME_ENTRY("Advanced Logic Research")           },
    { "AMC",    _VENDOR_NAME_ENTRY("Attachmate")                        },
    { "AMD",    _VENDOR_NAME_ENTRY("Amdek")                             },
    { "AMI",    _VENDOR_NAME_ENTRY("American Megatrends")               },
    { "AMP",    _VENDOR_NAME_ENTRY("Amptron")                           },
    { "AMT",    _VENDOR_NAME_ENTRY("Amtrans")                           },
    { "ANC",    _VENDOR_NAME_ENTRY("Ancot")                             },
    { "ANI",    _VENDOR_NAME_ENTRY("Anigma")                            },
    { "AOC",    _VENDOR_NAME_ENTRY("AOC")                               },
    { "APD",    _VENDOR_NAME_ENTRY("Applidata")                         },
    { "API",    _VENDOR_NAME_ENTRY("AcerView")                          },
    { "APP",    _VENDOR_NAME_ENTRY("Apple")                             },
    { "APS",    _VENDOR_NAME_ENTRY("Autologic")                         },
    { "ARC",    _VENDOR_NAME_ENTRY("Alta Research")                     },
    { "ART",    _VENDOR_NAME_ENTRY("ArtMedia")                          },
    { "ASE",    _VENDOR_NAME_ENTRY("ASEM")                              },
    { "ASI",    _VENDOR_NAME_ENTRY("Ahead Systems")                     },
    { "AST",    _VENDOR_NAME_ENTRY("AST Research")                      },
    { "ASU",    _VENDOR_NAME_ENTRY("ASUS")                              },
    { "ATI",    _VENDOR_NAME_ENTRY("Allied Telesis")                    },
    { "ATO",    _VENDOR_NAME_ENTRY("ASTRO DESIGN, INC.")                },
    { "ATT",    _VENDOR_NAME_ENTRY("AT&T")                              },
    { "ATX",    _VENDOR_NAME_ENTRY("Athenix")                           },
    { "AUO",    _VENDOR_NAME_ENTRY("AU Optronics Corporation")          },
    { "AUS",    _VENDOR_NAME_ENTRY("Asustek Computer Inc")              },
    { "AVI",    _VENDOR_NAME_ENTRY("AIR")                               },
    { "AVO",    _VENDOR_NAME_ENTRY("Avocent Corporation")               },
    { "AZU",    _VENDOR_NAME_ENTRY("Azura")                             },

    { "BAN",    _VENDOR_NAME_ENTRY("Banyan")                            },
    { "BCC",    _VENDOR_NAME_ENTRY("Beaver Computer Corporation")       },
    { "BCD",    _VENDOR_NAME_ENTRY("Dr. Seufert GmbH")                  },
    { "BEO",    _VENDOR_NAME_ENTRY("Bang & Olufsen")                    },
    { "BGT",    _VENDOR_NAME_ENTRY("Budzetron")                         },
    { "BIG",    _VENDOR_NAME_ENTRY("Bigscreen, Inc.")                   },
    { "BMM",    _VENDOR_NAME_ENTRY("MAG Technology")                    },
    { "BNQ",    _VENDOR_NAME_ENTRY("BenQ")                              },
    { "BOE",    _VENDOR_NAME_ENTRY("BOE Technology Group Co., Ltd")     },
    { "BRG",    _VENDOR_NAME_ENTRY("Bridge")                            },
    { "BTC",    _VENDOR_NAME_ENTRY("Bit 3")                             },
    { "BTE",    _VENDOR_NAME_ENTRY("Brilliant Technology")              },
    { "BUS",    _VENDOR_NAME_ENTRY("BusTek")                            },

    { "CAL",    _VENDOR_NAME_ENTRY("Acon")                              },
    { "CCI",    _VENDOR_NAME_ENTRY("Cache")                             },
    { "CCP",    _VENDOR_NAME_ENTRY("Epson")                             },
    { "CDP",    _VENDOR_NAME_ENTRY("CalComp")                           },
    { "CFG",    _VENDOR_NAME_ENTRY("Atlantis")                          },
    { "CHA",    _VENDOR_NAME_ENTRY("Chase Research")                    },
    { "CIP",    _VENDOR_NAME_ENTRY("Ciprico")                           },
    { "CLO",    _VENDOR_NAME_ENTRY("Clone Computers/Analogy")           },
    { "CLT",    _VENDOR_NAME_ENTRY("automated computer control systems")},
    { "CMD",    _VENDOR_NAME_ENTRY("CMD Technology")                    },
    { "CMN",    _VENDOR_NAME_ENTRY("Chimei innolux corp.")              },
    { "CMO",    _VENDOR_NAME_ENTRY("Chi Mei Optoelectronics corp.")     },
    { "CNI",    _VENDOR_NAME_ENTRY("Connect International")             },
    { "CNT",    _VENDOR_NAME_ENTRY("CNet Technology")                   },
    { "COM",    _VENDOR_NAME_ENTRY("Comtrol")                           },
    { "CPC",    _VENDOR_NAME_ENTRY("Ciprico")                           },
    { "CPD",    _VENDOR_NAME_ENTRY("CompuAdd")                          },
    { "CPG",    _VENDOR_NAME_ENTRY("DFI")                               },
    { "CPI",    _VENDOR_NAME_ENTRY("Computer Peripherals")              },
    { "CPL",    _VENDOR_NAME_ENTRY("Compal")                            },
    { "CPQ",    _VENDOR_NAME_ENTRY("Compaq")                            },
    { "CPT",    _VENDOR_NAME_ENTRY("cPATH")                             },
    { "CPX",    _VENDOR_NAME_ENTRY("Powermatic Data Systems")           },
    { "CRD",    _VENDOR_NAME_ENTRY("Cardinal Technologies")             },
    { "CRN",    _VENDOR_NAME_ENTRY("Cornerstone")                       },
    { "CRS",    _VENDOR_NAME_ENTRY("Cisco")                             },
    { "CSE",    _VENDOR_NAME_ENTRY("Compu Shack")                       },
    { "CSI",    _VENDOR_NAME_ENTRY("Cabletron")                         },
    { "CSS",    _VENDOR_NAME_ENTRY("CSS Laboratories")                  },
    { "CTN",    _VENDOR_NAME_ENTRY("Computone")                         },
    { "CTX",    _VENDOR_NAME_ENTRY("Chuntex/CTX")                       },
    { "CUB",    _VENDOR_NAME_ENTRY("Cubix")                             },
    { "CUI",    _VENDOR_NAME_ENTRY("CUI")                               },
    { "CYB",    _VENDOR_NAME_ENTRY("CyberVision")                       },

    { "DBI",    _VENDOR_NAME_ENTRY("DigiBoard")                         },
    { "DBL",    _VENDOR_NAME_ENTRY("Doble Engineering")                 },
    { "DCC",    _VENDOR_NAME_ENTRY("Dale Computer")                     },
    { "DCE",    _VENDOR_NAME_ENTRY("Mylex")                             },
    { "DCM",    _VENDOR_NAME_ENTRY("DCM Data Products")                 },
    { "DEC",    _VENDOR_NAME_ENTRY("DEC")                               },
    { "DEI",    _VENDOR_NAME_ENTRY("Deico Electronics")                 },
    { "DEL",    _VENDOR_NAME_ENTRY("Dell")                              },
    { "DFI",    _VENDOR_NAME_ENTRY("DFI")                               },
    { "DGC",    _VENDOR_NAME_ENTRY("Data General")                      },
    { "DGS",    _VENDOR_NAME_ENTRY("Diagsoft")                          },
    { "DIA",    _VENDOR_NAME_ENTRY("Diadem")                            },
    { "DIO",    _VENDOR_NAME_ENTRY("DIO")                               },
    { "DIS",    _VENDOR_NAME_ENTRY("Diseda")                            },
    { "DIT",    _VENDOR_NAME_ENTRY("Dragon Information Technology")     },
    { "DLK",    _VENDOR_NAME_ENTRY("D-Link")                            },
    { "DLO",    _VENDOR_NAME_ENTRY("Dlodlo Technologies Co., Ltd")      },
    { "DMB",    _VENDOR_NAME_ENTRY("Digicom Systems")                   },
    { "DMS",    _VENDOR_NAME_ENTRY("DOME imaging systems")              },
    { "DNV",    _VENDOR_NAME_ENTRY("NexView")                           },
    { "DOM",    _VENDOR_NAME_ENTRY("Dome Imaging Systems")              },
    { "DON",    _VENDOR_NAME_ENTRY("DENON, Ltd.")                       },
    { "DPC",    _VENDOR_NAME_ENTRY("Delta")                             },
    { "DPI",    _VENDOR_NAME_ENTRY("DocuPoint")                         },
    { "DPL",    _VENDOR_NAME_ENTRY("Digital Projection Limited")        },
    { "DPN",    _VENDOR_NAME_ENTRY("Shanghai Lexiang Technology Limited") },
    { "DPT",    _VENDOR_NAME_ENTRY("DPT")                               },
    { "DRT",    _VENDOR_NAME_ENTRY("Digital Research")                  },
    { "DSJ",    _VENDOR_NAME_ENTRY("VR Technology Holdings Limited")    },
    { "DSM",    _VENDOR_NAME_ENTRY("DSM Digial Services")               },
    { "DTC",    _VENDOR_NAME_ENTRY("Data Technology")                   },
    { "DTI",    _VENDOR_NAME_ENTRY("Diversified Technology")            },
    { "DTK",    _VENDOR_NAME_ENTRY("DTK Computer")                      },
    { "DTX",    _VENDOR_NAME_ENTRY("Data Translation")                  },
    { "DVC",    _VENDOR_NAME_ENTRY("DecaView")                          },
    { "DWE",    _VENDOR_NAME_ENTRY("Daewoo")                            },

    { "ECS",    _VENDOR_NAME_ENTRY("EliteGroup/ECS")                    },
    { "ENC",    _VENDOR_NAME_ENTRY("Eizo")                              },
    { "EGO",    _VENDOR_NAME_ENTRY("Ergo Electronics")                  },
    { "EKC",    _VENDOR_NAME_ENTRY("Kodak")                             },
    { "EHJ",    _VENDOR_NAME_ENTRY("Epson")                             },
    { "EIZ",    _VENDOR_NAME_ENTRY("Eizo")                              },
    { "ELI",    _VENDOR_NAME_ENTRY("Edsun")                             },
    { "ELS",    _VENDOR_NAME_ENTRY("ELSA")                              },
    { "ELX",    _VENDOR_NAME_ENTRY("Elonex")                            },
    { "EMC",    _VENDOR_NAME_ENTRY("ProView/EMC")                       },
    { "ENC",    _VENDOR_NAME_ENTRY("Eizo")                              },
    { "EPI",    _VENDOR_NAME_ENTRY("Envision")                          },
    { "EQX",    _VENDOR_NAME_ENTRY("Equinox")                           },
    { "ERG",    _VENDOR_NAME_ENTRY("Ergo")                              },
    { "ERP",    _VENDOR_NAME_ENTRY("EURAPLAN")                          },
    { "ESI",    _VENDOR_NAME_ENTRY("Extended Systems")                  },
    { "ETT",    _VENDOR_NAME_ENTRY("E-Tech Research")                   },
    { "EVX",    _VENDOR_NAME_ENTRY("Everex")                            },
    { "EXP",    _VENDOR_NAME_ENTRY("Data Export")                       },

    { "FCB",    _VENDOR_NAME_ENTRY("Furukawa Electric")                 },
    { "FCM",    _VENDOR_NAME_ENTRY("Funai")                             },
    { "FCT",    _VENDOR_NAME_ENTRY("Free Computer Technology")          },
    { "FDC",    _VENDOR_NAME_ENTRY("Future Domain")                     },
    { "FDX",    _VENDOR_NAME_ENTRY("Findex, Inc. ")                     },
    { "FGL",    _VENDOR_NAME_ENTRY("Fujitsu")                           },
    { "FIC",    _VENDOR_NAME_ENTRY("First International")               },
    { "FOR",    _VENDOR_NAME_ENTRY("Formac")                            },
    { "FOV",    _VENDOR_NAME_ENTRY("FOVE INC")                          },
    { "FRC",    _VENDOR_NAME_ENTRY("FORCE Computers")                   },
    { "FRI",    _VENDOR_NAME_ENTRY("Fibernet Research")                 },
    { "FTN",    _VENDOR_NAME_ENTRY("Fountain Technologies")             },
    { "FUJ",    _VENDOR_NAME_ENTRY("Fujitsu")                           },

    { "GAG",    _VENDOR_NAME_ENTRY("Gage Applied Sciences")             },
    { "GCI",    _VENDOR_NAME_ENTRY("Gateway Communications")            },
    { "GEN",    _VENDOR_NAME_ENTRY("Genesys")                           },
    { "GMX",    _VENDOR_NAME_ENTRY("GMX")                               },
    { "GRA",    _VENDOR_NAME_ENTRY("Graphica")                          },
    { "GSM",    _VENDOR_NAME_ENTRY("LG Electronics")                    },
    { "GVC",    _VENDOR_NAME_ENTRY("GVC")                               },
    { "GWY",    _VENDOR_NAME_ENTRY("Gateway")                           },

    { "HCL",    _VENDOR_NAME_ENTRY("HCL")                               },
    { "HCP",    _VENDOR_NAME_ENTRY("Hitachi")                           },
    { "HCW",    _VENDOR_NAME_ENTRY("Hauppauge")                         },
    { "HDL",    _VENDOR_NAME_ENTRY("Headland")                          },
    { "HEC",    _VENDOR_NAME_ENTRY("Hisense")   },
    { "HEI",    _VENDOR_NAME_ENTRY("Hyundai")                           },
    { "HIT",    _VENDOR_NAME_ENTRY("Hitachi/HINT")                      },
    { "HMX",    _VENDOR_NAME_ENTRY("HUMAX Co., Ltd.")                   },
    { "HPN",    _VENDOR_NAME_ENTRY("HP Inc.")                           },
    { "HSD",    _VENDOR_NAME_ENTRY("HannStar Display Corp")             },
    { "HSL",    _VENDOR_NAME_ENTRY("Hansol")                            },
    { "HTC",    _VENDOR_NAME_ENTRY("Hitachi")                           },
    { "HVR",    _VENDOR_NAME_ENTRY("HTC Corporation")                   },
    { "HWD",    _VENDOR_NAME_ENTRY("HighWater Designs")                 },
    { "HWP",    _VENDOR_NAME_ENTRY("HP")                                },
    { "HYL",    _VENDOR_NAME_ENTRY("Hypereal")                          },
    { "HYP",    _VENDOR_NAME_ENTRY("Hyphen Limited")                    },
    { "HWV",    _VENDOR_NAME_ENTRY("Huawei Technologies Co., Ltd")      },

    { "IBC",    _VENDOR_NAME_ENTRY("IBS")                               },
    { "IBM",    _VENDOR_NAME_ENTRY("IBM")                               },
    { "ICC",    _VENDOR_NAME_ENTRY("BICC Data Networks")                },
    { "ICL",    _VENDOR_NAME_ENTRY("Fujitsu/ICL")                       },
    { "ICN",    _VENDOR_NAME_ENTRY("Sanyo/Icon")                        },
    { "ICU",    _VENDOR_NAME_ENTRY("Intel")                             },
    { "IDS",    _VENDOR_NAME_ENTRY("Intellistor")                       },
    { "IFT",    _VENDOR_NAME_ENTRY("Informtech")                        },
    { "IGM",    _VENDOR_NAME_ENTRY("IGM Communications")                },
    { "III",    _VENDOR_NAME_ENTRY("Intelligent Instrumentation")       },
    { "IIN",    _VENDOR_NAME_ENTRY("Intel")                             },
    { "IMA",    _VENDOR_NAME_ENTRY("Imagraph")                          },
    { "IMC",    _VENDOR_NAME_ENTRY("IMC Networks")                      },
    { "IMP",    _VENDOR_NAME_ENTRY("Impression")                        },
    { "IMX",    _VENDOR_NAME_ENTRY("Arpara Technology Co., Ltd.")       },
    { "INF",    _VENDOR_NAME_ENTRY("Inframetrics")                      },
    { "INL",    _VENDOR_NAME_ENTRY("InnoLux Display Corporation")       },
    { "INP",    _VENDOR_NAME_ENTRY("Interphase")                        },
    { "INS",    _VENDOR_NAME_ENTRY("Ines")                              },
    { "INT",    _VENDOR_NAME_ENTRY("Intel")                             },
    { "IOD",    _VENDOR_NAME_ENTRY("IODATA")                            },
    { "ISA",    _VENDOR_NAME_ENTRY("ISA")                               },
    { "ISI",    _VENDOR_NAME_ENTRY("Interface Solutions")               },
    { "ISL",    _VENDOR_NAME_ENTRY("Isolation Systems")                 },
    { "ITA",    _VENDOR_NAME_ENTRY("Itausa")                            },
    { "ITC",    _VENDOR_NAME_ENTRY("ITK")                               },
    { "ITN",    _VENDOR_NAME_ENTRY("NTI Group/ASUS")                    },
    { "ITK",    _VENDOR_NAME_ENTRY("NTI Group")                         },
    { "IVK",    _VENDOR_NAME_ENTRY("Iiyama")                            },
    { "IVM",    _VENDOR_NAME_ENTRY("Idek Iiyama")                       },
    { "IVR",    _VENDOR_NAME_ENTRY("Inlife-Handnet Co., Ltd.")          },
    { "IWR",    _VENDOR_NAME_ENTRY("Icuiti Corporation")                },

    { "JDI",    _VENDOR_NAME_ENTRY("Japan Display Inc")                 },
    { "JEN",    _VENDOR_NAME_ENTRY("Jean")                              },
    { "JKC",    _VENDOR_NAME_ENTRY("JVC Kenwood Corporation")           },
    { "JVC",    _VENDOR_NAME_ENTRY("JVC")                               },

    { "KDS",    _VENDOR_NAME_ENTRY("Korea Data Systems")                },
    { "KDK",    _VENDOR_NAME_ENTRY("Kodiak")                            },
    { "KES",    _VENDOR_NAME_ENTRY("Kesa Crop")                         },
    { "KFC",    _VENDOR_NAME_ENTRY("KFC Computek")                      },
    { "KPC",    _VENDOR_NAME_ENTRY("King Phoenix")                      },
    { "KSC",    _VENDOR_NAME_ENTRY("Kinetic Systems")                   },
    { "KTC",    _VENDOR_NAME_ENTRY("Kingston Technology")               },
    { "KTG",    _VENDOR_NAME_ENTRY("KayserThrede")                      },
    { "KTR",    _VENDOR_NAME_ENTRY("IMRI")                              },
    { "KYC",    _VENDOR_NAME_ENTRY("Kyocera")                           },

    { "LAG",    _VENDOR_NAME_ENTRY("Laguna Systems")                    },
    { "LCD",    _VENDOR_NAME_ENTRY("Toshiba Matsushita Display Technology Co., Ltd")},
    { "LCS",    _VENDOR_NAME_ENTRY("Longshine Electronics")             },
    { "LEF",    _VENDOR_NAME_ENTRY("Leaf Systems")                      },
    { "LEN",    _VENDOR_NAME_ENTRY("Lenovo Group Limited")              },
    { "LGD",    _VENDOR_NAME_ENTRY("LG Display")                        },
    { "LGE",    _VENDOR_NAME_ENTRY("LG Electronics")                    },
    { "LKM",    _VENDOR_NAME_ENTRY("Likom/LKM")                         },
    { "LNK",    _VENDOR_NAME_ENTRY("Link Technologies")                 },
    { "LTI",    _VENDOR_NAME_ENTRY("Longshine")                         },
    { "LTN",    _VENDOR_NAME_ENTRY("Lite-On")                           },

    { "MAG",    _VENDOR_NAME_ENTRY("MAG Technology")                    },
    { "MAX",    _VENDOR_NAME_ENTRY("Maxdata/Belinea")                   },
    { "MAY",    _VENDOR_NAME_ENTRY("Maynard Electronics")               },
    { "MBC",    _VENDOR_NAME_ENTRY("MBC")                               },
    { "MCC",    _VENDOR_NAME_ENTRY("MCCI")                              },
    { "MCD",    _VENDOR_NAME_ENTRY("McDATA")                            },
    { "MCI",    _VENDOR_NAME_ENTRY("Micronics")                         },
    { "MCR",    _VENDOR_NAME_ENTRY("Marina Communications")             },
    { "MCS",    _VENDOR_NAME_ENTRY("Micro Computer Systems")            },
    { "MCT",    _VENDOR_NAME_ENTRY("Microtec")                          },
    { "MDD",    _VENDOR_NAME_ENTRY("Modis")                             },
    { "MDG",    _VENDOR_NAME_ENTRY("Madge Networks")                    },
    { "MDS",    _VENDOR_NAME_ENTRY("Micro Display Systems")             },
    { "MDT",    _VENDOR_NAME_ENTRY("Magus Data")                        },
    { "MED",    _VENDOR_NAME_ENTRY("Medion")                            },
    { "MEI",    _VENDOR_NAME_ENTRY("Panasonic")                         },
    { "MEL",    _VENDOR_NAME_ENTRY("Mitsubishi")                        },
    { "MET",    _VENDOR_NAME_ENTRY("Metheus")                           },
    { "MFG",    _VENDOR_NAME_ENTRY("Microfield Graphics")               },
    { "MGC",    _VENDOR_NAME_ENTRY("CompuAdd")                          },
    { "MGT",    _VENDOR_NAME_ENTRY("Megatech")                          },
    { "MIC",    _VENDOR_NAME_ENTRY("Micronics")                         },
    { "MIR",    _VENDOR_NAME_ENTRY("Miro")                              },
    { "MJI",    _VENDOR_NAME_ENTRY("MARANTZ JAPAN, INC.")               },
    { "MLX",    _VENDOR_NAME_ENTRY("Mylex")                             },
    { "MMX",    _VENDOR_NAME_ENTRY("MAG Technology")                    },
    { "MOR",    _VENDOR_NAME_ENTRY("Morse Technology")                  },
    { "MSI",    _VENDOR_NAME_ENTRY("Microstep")                         },
    { "MST",    _VENDOR_NAME_ENTRY("MS Telematica")                     },
    { "MSV",    _VENDOR_NAME_ENTRY("Mosgi")                             },
    { "MTC",    _VENDOR_NAME_ENTRY("Mitac")                             },
    { "MTI",    _VENDOR_NAME_ENTRY("Morse Technology")                  },
    { "MTQ",    _VENDOR_NAME_ENTRY("Mountain Computer")                 },
    { "MTS",    _VENDOR_NAME_ENTRY("Multi-Tech Systems")                },
    { "MTX",    _VENDOR_NAME_ENTRY("Matrox")                            },
    { "MVD",    _VENDOR_NAME_ENTRY("Microvitec PLC")                    },
    { "MVN",    _VENDOR_NAME_ENTRY("META COMPANY")                      },
    { "MWY",    _VENDOR_NAME_ENTRY("Microway")                          },
    { "MYA",    _VENDOR_NAME_ENTRY("Monydata")                          },
    { "MYL",    _VENDOR_NAME_ENTRY("Mylex")                             },
    { "MYX",    _VENDOR_NAME_ENTRY("Micronyx")                          },
    { "MZI",    _VENDOR_NAME_ENTRY("Mozo")                              },

    { "NAN",    _VENDOR_NAME_ENTRY("Nanao")                             },
    { "NCA",    _VENDOR_NAME_ENTRY("Siemens Nixdorf")                   },
    { "NCD",    _VENDOR_NAME_ENTRY("NCD")                               },
    { "NCS",    _VENDOR_NAME_ENTRY("Northgate")                         },
    { "NDC",    _VENDOR_NAME_ENTRY("National DataComm")                 },
    { "NDS",    _VENDOR_NAME_ENTRY("Nokia")                             },
    { "NEC",    _VENDOR_NAME_ENTRY("NEC")                               },
    { "NIC",    _VENDOR_NAME_ENTRY("National Instruments")              },
    { "NIT",    _VENDOR_NAME_ENTRY("Network Info Technology")           },
    { "NOK",    _VENDOR_NAME_ENTRY("Nokia")                             },
    { "NPI",    _VENDOR_NAME_ENTRY("Network Peripherals")               },
    { "NSC",    _VENDOR_NAME_ENTRY("National Semiconductor")            },
    { "NSS",    _VENDOR_NAME_ENTRY("Newport Systems")                   },
    { "NTI",    _VENDOR_NAME_ENTRY("New Tech")                          },
    { "NVD",    _VENDOR_NAME_ENTRY("NVIDIA")                            },
    { "NVL",    _VENDOR_NAME_ENTRY("Novell")                            },
    { "NXG",    _VENDOR_NAME_ENTRY("Nexgen")                            },

    { "OAS",    _VENDOR_NAME_ENTRY("OAsys")                             },
    { "OCN",    _VENDOR_NAME_ENTRY("Olfan")                             },
    { "OEC",    _VENDOR_NAME_ENTRY("Daytek")                            },
    { "OLC",    _VENDOR_NAME_ENTRY("Olicom")                            },
    { "OLI",    _VENDOR_NAME_ENTRY("Olivetti")                          },
    { "OKI",    _VENDOR_NAME_ENTRY("OKI Electric Industrial Company Ltd") },
    { "ONK",    _VENDOR_NAME_ENTRY("ONKYO Corporation")                 },
    { "OPT",    _VENDOR_NAME_ENTRY("OPTi")                              },
    { "OQI",    _VENDOR_NAME_ENTRY("Optiquest")                         },
    { "OTI",    _VENDOR_NAME_ENTRY("Orchid Technology")                 },
    { "OVR",    _VENDOR_NAME_ENTRY("Oculus VR Inc.")                    },
    { "OZO",    _VENDOR_NAME_ENTRY("Zoom Telephonics")                  },

    { "PAR",    _VENDOR_NAME_ENTRY("Parallan Comp Inc")                 },
    { "PBE",    _VENDOR_NAME_ENTRY("Packard Bell")                      },
    { "PBI",    _VENDOR_NAME_ENTRY("Pitney Bowes")                      },
    { "PBN",    _VENDOR_NAME_ENTRY("Packard Bell")                      },
    { "PCI",    _VENDOR_NAME_ENTRY("Pioneer Computer")                  },
    { "PCP",    _VENDOR_NAME_ENTRY("Procomp")                           },
    { "PDR",    _VENDOR_NAME_ENTRY("Pure Data")                         },
    { "PEA",    _VENDOR_NAME_ENTRY("Peacock")                           },
    { "PGS",    _VENDOR_NAME_ENTRY("Princeton Graphics")                },
    { "PHI",    _VENDOR_NAME_ENTRY("Phillips")                          },
    { "PHL",    _VENDOR_NAME_ENTRY("Philips")                           },
    { "PIO",    _VENDOR_NAME_ENTRY("Pioneer Electronic Corporation")    },
    { "PI0",    _VENDOR_NAME_ENTRY("Pioneer")                           },
    { "PIR",    _VENDOR_NAME_ENTRY("Pico Technology Inc")               },
    { "PJD",    _VENDOR_NAME_ENTRY("Projectiondesign AS")               },
    { "PLB",    _VENDOR_NAME_ENTRY("PLB")                               },
    { "PLX",    _VENDOR_NAME_ENTRY("Ocean Office Automation")           },
    { "PMC",    _VENDOR_NAME_ENTRY("PMC Consumer Electronics")          },
    { "PMV",    _VENDOR_NAME_ENTRY("MAG Technology")                    },
    { "PNR",    _VENDOR_NAME_ENTRY("Planar Systems, Inc.")              },
    { "PRO",    _VENDOR_NAME_ENTRY("Proteon")                           },
    { "PSI",    _VENDOR_NAME_ENTRY("PSI Perceptive Solutions")          },
    { "PTS",    _VENDOR_NAME_ENTRY("ProView/EMC/PTS")                   },
    { "PVR",    _VENDOR_NAME_ENTRY("Pimax Tech Co., Ltd")               },

    { "QDI",    _VENDOR_NAME_ENTRY("Quantum Data Incorporated")         },
    { "QDM",    _VENDOR_NAME_ENTRY("Quadram")                           },
    { "QTD",    _VENDOR_NAME_ENTRY("Quantum 3D Inc")                    },
    { "QTM",    _VENDOR_NAME_ENTRY("Quantum")                           },

    { "RAC",    _VENDOR_NAME_ENTRY("Racore Computer Products")          },
    { "RCE",    _VENDOR_NAME_ENTRY("RCE")                               },
    { "RCI",    _VENDOR_NAME_ENTRY("RC International")                  },
    { "REL",    _VENDOR_NAME_ENTRY("Relisys")                           },
    { "REM",    _VENDOR_NAME_ENTRY("REM")                               },
    { "RII",    _VENDOR_NAME_ENTRY("Racal Interlan")                    },
    { "RMP",    _VENDOR_NAME_ENTRY("Research Machines")                 },
    { "ROK",    _VENDOR_NAME_ENTRY("Rockwell")                          },
    { "RTI",    _VENDOR_NAME_ENTRY("Rancho Technology")                 },
    { "RUN",    _VENDOR_NAME_ENTRY("RUNCO International")               },

    { "SAM",    _VENDOR_NAME_ENTRY("Samsung")                           },
    { "SAN",    _VENDOR_NAME_ENTRY("Sanyo Electric Co.,Ltd.")           },
    { "SCC",    _VENDOR_NAME_ENTRY("SORD")                              },
    { "SCD",    _VENDOR_NAME_ENTRY("Sanyo")                             },
    { "SDI",    _VENDOR_NAME_ENTRY("Samtron/Sigma Designs")             },
    { "SDT",    _VENDOR_NAME_ENTRY("Siemens AG")                        },
    { "SEA",    _VENDOR_NAME_ENTRY("Segate")                            },
    { "SEC",    _VENDOR_NAME_ENTRY("Seiko/Epson")                       },
    { "SEN",    _VENDOR_NAME_ENTRY("Sencore")                           },
    { "SGT",    _VENDOR_NAME_ENTRY("Stargate Technology/AT&T")          },
    { "SGX",    _VENDOR_NAME_ENTRY("SGI")                               },
    { "SHP",    _VENDOR_NAME_ENTRY("Sharp")                             },
    { "SIB",    _VENDOR_NAME_ENTRY("Sanyo")                             },
    { "SIE",    _VENDOR_NAME_ENTRY("Siemens Nixdorf")                   },
    { "SII",    _VENDOR_NAME_ENTRY("Silicon Image, Inc.")               },
    { "SIS",    _VENDOR_NAME_ENTRY("SiS/Modula Tech")                   },
    { "SIT",    _VENDOR_NAME_ENTRY("Sitintel")                          },
    { "SIX",    _VENDOR_NAME_ENTRY("Zuniq Data")                        },
    { "SKD",    _VENDOR_NAME_ENTRY("Schneider & Koch")                  },
    { "SKW",    _VENDOR_NAME_ENTRY("Skyworth")                          },
    { "SKY",    _VENDOR_NAME_ENTRY("SKYDATA S.P.A.")                    },
    { "SLB",    _VENDOR_NAME_ENTRY("Shlumberger Ltd")                   },
    { "SLT",    _VENDOR_NAME_ENTRY("Salt Internatioinal Corp.")         },
    { "SLX",    _VENDOR_NAME_ENTRY("Specialix")                         },
    { "SMC",    _VENDOR_NAME_ENTRY("Standard Microsystems")             },
    { "SMI",    _VENDOR_NAME_ENTRY("Smile")                             },
    { "SML",    _VENDOR_NAME_ENTRY("Smile")                             },
    { "SMS",    _VENDOR_NAME_ENTRY("Silicon Multimedia Systems")        },
    { "SNI",    _VENDOR_NAME_ENTRY("Siemens Nixdorf")                   },
    { "SNY",    _VENDOR_NAME_ENTRY("Sony")                              },
    { "SOB",    _VENDOR_NAME_ENTRY("Sanyo")                             },
    { "SPE",    _VENDOR_NAME_ENTRY("SPEA")                              },
    { "SPT",    _VENDOR_NAME_ENTRY("Sceptre")                           },
    { "SRC",    _VENDOR_NAME_ENTRY("Shamrock/SunRiver")                 },
    { "SSS",    _VENDOR_NAME_ENTRY("S3")                                },
    { "STA",    _VENDOR_NAME_ENTRY("Stesa")                             },
    { "STB",    _VENDOR_NAME_ENTRY("STB Systems")                       },
    { "STC",    _VENDOR_NAME_ENTRY("Sampo/STAC")                        },
    { "STP",    _VENDOR_NAME_ENTRY("Sceptre")                           },
    { "STR",    _VENDOR_NAME_ENTRY("Starlight Networks")                },
    { "SUK",    _VENDOR_NAME_ENTRY("Schneider & Koch")                  },
    { "SUP",    _VENDOR_NAME_ENTRY("Supra/Diamond Media")               },
    { "SUR",    _VENDOR_NAME_ENTRY("Surenam")                           },
    { "SVR",    _VENDOR_NAME_ENTRY("Sensics Inc.")                      },
    { "SYL",    _VENDOR_NAME_ENTRY("Sylvania")                          },
    { "SYN",    _VENDOR_NAME_ENTRY("Synaptics Inc")                     },

    { "TAI",    _VENDOR_NAME_ENTRY("Toshiba")                           },
    { "TAT",    _VENDOR_NAME_ENTRY("Tatung")                            },
    { "TAX",    _VENDOR_NAME_ENTRY("Taxan")                             },
    { "TCC",    _VENDOR_NAME_ENTRY("Tandon")                            },
    { "TCI",    _VENDOR_NAME_ENTRY("Tulip")                             },
    { "TCL",    _VENDOR_NAME_ENTRY("Tech Concepts")                     },
    { "TCM",    _VENDOR_NAME_ENTRY("Techmedia/3Com")                    },
    { "TCO",    _VENDOR_NAME_ENTRY("Thomas Conrad")                     },
    { "TCR",    _VENDOR_NAME_ENTRY("Thomson Consumer Electronics")      },
    { "TCS",    _VENDOR_NAME_ENTRY("Tatung")                            },
    { "TDS",    _VENDOR_NAME_ENTRY("Tri Data Systems")                  },
    { "TDT",    _VENDOR_NAME_ENTRY("TDT")                               },
    { "TDY",    _VENDOR_NAME_ENTRY("Tandy")                             },
    { "TEA",    _VENDOR_NAME_ENTRY("Teac")                              },
    { "TEC",    _VENDOR_NAME_ENTRY("Tecmar")                            },
    { "TEI",    _VENDOR_NAME_ENTRY("TECO")                              },
    { "TGI",    _VENDOR_NAME_ENTRY("TriGem")                            },
    { "TGS",    _VENDOR_NAME_ENTRY("Torus")                             },
    { "TMA",    _VENDOR_NAME_ENTRY("Tianma Microelectronics")           },
    { "TOS",    _VENDOR_NAME_ENTRY("Toshiba")                           },
    { "TRI",    _VENDOR_NAME_ENTRY("Tricord")                           },
    { "TRM",    _VENDOR_NAME_ENTRY("Tekram")                            },
    { "TRL",    _VENDOR_NAME_ENTRY("Royal")                             },
    { "TRS",    _VENDOR_NAME_ENTRY("Torus")                             },
    { "TRU",    _VENDOR_NAME_ENTRY("Aashima/Truevision")                },
    { "TSB",    _VENDOR_NAME_ENTRY("Toshiba")                           },
    { "TSC",    _VENDOR_NAME_ENTRY("Sanyo")                             },
    { "TSI",    _VENDOR_NAME_ENTRY("TeleVideo")                         },
    { "TST",    _VENDOR_NAME_ENTRY("Transtream Inc")                    },
    { "TTC",    _VENDOR_NAME_ENTRY("Telecommunications Techniques")     },
    { "TTK",    _VENDOR_NAME_ENTRY("Totoku")                            },
    { "TTX",    _VENDOR_NAME_ENTRY("TTX")                               },
    { "TVI",    _VENDOR_NAME_ENTRY("TeleVideo/Truevision")              },
    { "TVM",    _VENDOR_NAME_ENTRY("TVM")                               },
    { "TWA",    _VENDOR_NAME_ENTRY("Tidewater")                         },
    { "TWE",    _VENDOR_NAME_ENTRY("Kontron")                           },
    { "TXN",    _VENDOR_NAME_ENTRY("Texas Instruments")                 },
    { "TYN",    _VENDOR_NAME_ENTRY("Tyan Computer")                     },

    { "UBI",    _VENDOR_NAME_ENTRY("Ungermann Bass")                    },
    { "UFO",    _VENDOR_NAME_ENTRY("UFO Systems")                       },
    { "UNA",    _VENDOR_NAME_ENTRY("Unisys")                            },
    { "UNI",    _VENDOR_NAME_ENTRY("Unisys")                            },
    { "UNM",    _VENDOR_NAME_ENTRY("Unisys")                            },
    { "UNO",    _VENDOR_NAME_ENTRY("Unisys")                            },
    { "UNS",    _VENDOR_NAME_ENTRY("Unisys")                            },
    { "UNT",    _VENDOR_NAME_ENTRY("Unisys")                            },
    { "USC",    _VENDOR_NAME_ENTRY("UltraStor")                         },
    { "USR",    _VENDOR_NAME_ENTRY("US Robotics")                       },
    { "UTB",    _VENDOR_NAME_ENTRY("Utobia")                            },

    { "VES",    _VENDOR_NAME_ENTRY("Vestel")                            },
    { "VIK",    _VENDOR_NAME_ENTRY("Viking")                            },
    { "VLV",    _VENDOR_NAME_ENTRY("Valve Corporation")                 },
    { "VMI",    _VENDOR_NAME_ENTRY("Vermont MicroSystems")              },
    { "VOB",    _VENDOR_NAME_ENTRY("Vobis")                             },
    { "VRG",    _VENDOR_NAME_ENTRY("VRgineers, Inc. ")                  },
    { "VRT",    _VENDOR_NAME_ENTRY("Varjo Technologies")                },
    { "VSC",    _VENDOR_NAME_ENTRY("ViewSonic")                         },

    { "WAC",    _VENDOR_NAME_ENTRY("Wacom Tech")                        },
    { "WDC",    _VENDOR_NAME_ENTRY("Western Digital")                   },
    { "WDE",    _VENDOR_NAME_ENTRY("Westinghouse Digital Electronics")  },
    { "WIL",    _VENDOR_NAME_ENTRY("WIPRO")                             },
    { "WTC",    _VENDOR_NAME_ENTRY("Wen Technology")                    },
    { "WYS",    _VENDOR_NAME_ENTRY("Wyse Technology")                   },

    { "YMH",    _VENDOR_NAME_ENTRY("Yamaha Corporation")                },
    { "YHQ",    _VENDOR_NAME_ENTRY("Yokogawa")                          },

    { "ZCM",    _VENDOR_NAME_ENTRY("Zenith")                            },
    { "ZDS",    _VENDOR_NAME_ENTRY("Zenith")                            },
    { "ZYT",    _VENDOR_NAME_ENTRY("Zytex")                             },
};

#endif /* __NV_PNP_VENDOR_IDS_H__ */

