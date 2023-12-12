# Neutrino

A 3D printer designed to be cheap, accessible, and portable. Currently in development, do NOT try building your own without messaging me for help for now. Join the the Discord server [here](https://discord.gg/VZFWGp7FHZ)

The `dev_process` folder contains a selection of notes & data that provide a peek into the development process of this printer. Due to privacy reasons it is only a snippet. If there's something specific feel free to reach out. 

### Features
- Fits in a 200x200x70mm volume
- Under $300 CAD (using the attached BOM)
- Uses common, off-the-shelf parts
- Completely self replicating* (currently the base is not printable on itself)

*planned

---
### Getting started

In the root of the repository is a file called `BOM.xlsx`. Contains all the relevant links, notes, etc. Currently missing screw counts, please use the CAD for that.

Join the discord for help, I will gladly give guidance on how to build your own.


---
### FAQ:

**Can I see a video?**

There are short clips that can be found [here]() (missing link). Currently working on a proper release video, will try and get that out soon.

**Where's the extruder?**

Great question! The Neutrino is designed to use a Sherpa Mini in bowden configuration. Due to copyright, it cannot be included in the CAD. It can be found [here](https://github.com/Annex-Engineering/Sherpa_Mini-Extruder). Totally awesome design.

**Why a Bowden Setup?**

Initially the printer had a Direct Drive setup, but this was later swapped to Bowden. There were a couple reasons for this
- Faster printing
- Short tube length
- Easier maintenance
- Easier to explain to others
    - Being a portable printer, many people who have never seen a 3D printer see it. I think this makes Neutrino double as an educational/inspirational tool and for that reason it is easier to explain the separate parts of a Bowden extruder vs a DD setup. 

**Where can I source my parts?**

Anywhere you can find them. It uses all standard 8mm + M3 hardware. AliExpress, Amazon, spare parts, etc. Unfortunately you will need to print your own parts for now, but that will change soon.

**Is there an assembly guide?**

Not yet, working on that soon. For now you should just use the CAD. There is also the [discord](https://discord.gg/VZFWGp7FHZ) for help. I can assist you personally there.

**What is under `OLED_Module`?**

Under OLED_Module is a custom, optional PCB that contains an OLED display, rotary encoder, kill switch, and speaker. It is currently untested but I have the PCBs arriving soon. 

---

### TODO:

- [ ] Make the base self replicating
- [ ] Misc clearance fixes
- [ ] Add pin breakout connector
- [ ] Add PET Recycling integration

#### [Credits](/CREDITS.md)