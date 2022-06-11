import connectDb from "../../../middleware/db";
import Users from "../../../models/UserSchema";

const handler = async (req, res) => {
  console.log(req.body);

  const { email, username } = req.body;
  const newuser = {};

  let searcheduser = await Users.findOne({ email: email });

  if (searcheduser) {
    if (email) {
      newuser.email = email;
    }

    if (username) {
      newuser.username = username;
    }

    let u = await Users.findOneAndUpdate({ email: email }, newuser);

    return res.status(200).json({ sucess: "sucess" });
  } else {
    if (email) {
      newuser.email = email;
    }

    if (username) {
      newuser.username = username;
    }

    let p = new Users(newuser);

    await p.save();

    return res.status(200).json(p);
  }
};

export default connectDb(handler);
